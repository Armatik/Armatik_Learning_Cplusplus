#include <iostream>
using namespace std;

int Lab6_3() {
    system( "chcp 65001");
    int l=12; //задаём размер массива
    int *array = new int[l];
    for (int i = 0; i < l; i++) {//Получаем значения массива от пользователя
        int userData;
        cout << "->";
        cin >> userData;
        array[i] = userData;
    }

    for (int i = 0; i < l; i++) {//Меняем местами чётные и нечётные элементы массива
        if (array[i] % 2)
            array[i] -= 1;
        else
            array[i] += 1;
    }

    for (int i = 0; i < l; i++) {//Выводим полученный массив
        cout << i << " элемент = " << array[i] << "\n";
    }
    delete[] array;
    return 0;
}
