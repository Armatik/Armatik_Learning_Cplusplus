#include <iostream>

using namespace std;

int Lab5_8()
{
    int size, boln = 0;
    cout << "Введите размер массива: ";
    cin >> size;
    int A[size];

    cout << "Введите ", size," чисел: ";  // наполняем массив
    for (int i=0; i<size; i++)
        cin >> A[i];

    for (int i = 1; i < size; i++) {    //Проверяет массив на последовательность
        if (A[i - 1] > A[i]){
            boln = 1;
        }
    }
    if (boln == 1){
        cout << "Это не возростающая последовательность";
    } else {
        cout << "Это возростающая последовательность";
    }

    return 0;
}
