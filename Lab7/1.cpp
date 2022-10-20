#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;

void fill_array(int *n, int l){//  Заполняем и выводим массив n с длинной l
    cout << "Работаем с массивом длинной " << l << "\n";
    for(int i = 0; i<l; i++){//Заполняем массив
        cout << "Введите " << i+1 << " элемент массива" << "\n";
        cin >> n[i];
    }
    cout << "Выводим заполеннный массив: ";
    for(int i = 0; i<l; i++){//выводим массив
        cout << n[i] << " ";
    }
    cout << "\n";
}

int Lab7_1(){
    cout << "Введите длину первого и второго массива через пробел: ";
    int l1;
    int l2;
    cin >> l1 >> l2;
    int a1[l1];
    int a2[l2];
    fill_array(a1, l1);
    fill_array(a2, l2);
    return 0;
}