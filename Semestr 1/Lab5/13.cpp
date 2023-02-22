#include <iostream>

using namespace std;

int Lab5_13()
{
    int size,one,two,three,four,five,six;
    cout<<"Введите размер стороны квадрата: "; cin>>size;
    int array[size][size];
    cout<<"Введите значения в массив: ";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin>>array[i][j];

        }
        cout<<endl;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout<<array[i][j]<< " ";
        }
        cout<<endl;
    }
    int r1[size];
    r1[0] = 0;
    for (int i = 0; i < size; i++) {
        r1[i] = 0;
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            r1[i] += array[i][j];
        }

    }
    for (int i = 0; i < size; i++) {
        cout<< r1[i]<< " ";
    }

    int r2[size];
    r2[0] = 0;
    for (int i = 0; i < size; i++) {
        r2[i] = 0;
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            r2[i] += array[j][i];

        }

    }
    for (int i = 0; i < size; i++) {
        cout<< r2[i]<< " ";
    }

    int r3[size];
    r3[0] = 0;
    for (int i = 0; i < size; i++) {

        r3[0] += array[i][i];
    }

    cout<< r3[0]<< " ";


    int r4[size];
    r4[0] = 0;
    for (int i = 0; i < size; i++) {

        r4[0] += array[size - 1 - i][size - 1 - i];
    }

    cout<< r4[0]<< " ";

    for (int i = 1; i < size; i++) {
        if(r1[i - 1] != r1[i]){
            cout<< " NO";
            break;
        }
        if(r2[i - 1] != r2[i]){
            cout<< " NO";
            break;
        }
        if(r3[0] != r4[0]){
            cout<< " NO";
            break;
        }
    }

}