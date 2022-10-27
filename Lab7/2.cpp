#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;


int arraySize = 0;


void rand_fill_array(int l, int n[5][5]){//  Заполняем и выводим массив
    srand(time(nullptr));
    cout << "Заполняю массив" << "\n";
    for(int g = 0; g < l; g++) {
        for (int i = 0; i < l; i++) {//Заполняем массив
            cout << "Заполняю массив " << g << " " << i << " - ";
            n[g][i] = rand() % 31 + 30;
            cout << n[g][i] << "\n";
        }
    }
    cout << "Выводим заполеннный массив: ";
    for(int g = 0; g<l; g++) {
        cout << "[";
        for (int i = 0; i < l; i++) {//выводим массив
            cout << n[g][i] << ",";
        }
        cout << "] ";
    }
    cout << "\n";
}


int max_of_array(int l, int n[5][5]){
    cout << "Ищу максимальное значение массива" << "\n";
    int m = 0;
    for(int g = 0; g<l; g++) {
        for (int i = 0; i < l; i++) {
            if (n[g][i] > m) {
                m = n[g][i];
            }
        }
    }
    return m;
}


int min_of_array(int l, int n[5][5]){
    cout << "Ищю минимальное значение массива" << "\n";
    int m = 1000;
    for(int g = 0; g<l; g++) {
        for (int i = 0; i < l; i++) {
            if (n[g][i] < m) {
                m = n[g][i];
            }
        }
    }
    return m;
}


int Lab7_2(){
    system( "chcp 65001");
    cout << "Введите длину и ширину массива ";
    int l = 5;
    int a[5][5];
    rand_fill_array(l, a);
    cout << "Максимальный элемент массива: "<< max_of_array(l, a)<<"\n";
    cout << "Минимальный элемент массива: "<< min_of_array(l, a)<<"\n";
    return 0;
}