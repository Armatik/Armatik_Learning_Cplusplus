#include <iostream>
using namespace std;

int Lab6_3() {
    system( "chcp 65001");
    int *array = new int[12];
    for (int i = 0; i < 12; i++) {
        int userData;
        cout << "->";
        cin >> userData;
        array[i] = userData;
    }

    for (int i = 0; i < 12; i++) {
        if (array[i] % 2)
            array[i] -= 1;
        else
            array[i] += 1;
    }

    for (int i = 0; i < 12; i++)
        cout << i << " элемент = " << array[i] << "\n";

    delete[] array;

    return 0;
}
