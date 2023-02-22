#include <iostream>

using namespace std;

int Lab5_10()
{
    int size,promo;
    cout<<"Введите размер массива: "; cin>>size;
    int array[size];
    cout<<"Введите значения в массив: ";
    for (int i = 0; i < size; i++) {
        cin>>array[i];
    }
    cout<<"Идёт сортировка по убыванию "<< endl;
    for (int j = 0; j < size; j++) {
        for (int i = 1; i < size; i++) {

            if(array[i - 1] < array[i]){
                promo = array[i - 1];
                array[i - 1] = array[i];
                array[i] = promo;
            }

        }
    }
    for (int i = 0; i < size; i++) {
        cout<< array[i]<< endl;
    }

    return 0;
}