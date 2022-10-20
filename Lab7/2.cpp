#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;

void rand_fill_array(int *n, int l){//  Заполняем и выводим массив
    cout << "Заполняю массив" << "\n";
    for(int g = 0; g<l; g++) {
        for (int i = 0; i < l; i++) {//Заполняем массив
            n[i][g] = rand() % 31 + 30;
        }
    }
    cout << "Выводим заполеннный массив: ";
    for(int g = 0; g<l; g++) {
        for (int i = 0; i < l; i++) {//выводим массив
            cout << n[g][i] << " ";
        }
    }
    cout << "\n";
}
int max_of_array(int *n, int l){
    cout << "Ищю максимальное значение массива" << "\n";
    int m;
    m = 0;
    for(int g = 0; g<l; g++) {
        for (int i = 0; i < l; i++) {
            if (n[g][i] > m) {
                m = n[g][i];
            }
        }
    }
    return m;
}
int min_of_array(int *n, int l){
    cout << "Ищю минимальное значение массива" << "\n";
    int m;
    m = 1000;
    for(int g = 0; g<l; g++) {
        for (int i = 0; i < l; i++) {
            if (n[g][i] < m) {
                m = n[g][i];
            }
        }
    }
    return m;
}

int main(){
    cout << "Введите длину и ширину массива ";
    int l;
    cin >> l;
    int a[l][l];
    rand_fill_array(a, l);
    cout << "Максимальный элемент массива: "<< max_of_array(a, l)<<"\n";
    cout << "Минимальный элемент массива: "<< min_of_array(a, l)<<"\n";

    return 0;
}