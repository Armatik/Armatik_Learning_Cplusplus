#include <iostream>
using namespace std;
int Lab5_3(){
    int s, summa, maxindex, max = 0;
    cout << "Введите размер стороны в массиве: ";
    cin >> s;
    int a[s][s];
    for (int i = 0; i < s; i++){
        for (int j = 0; j < s; j++){
            a[i][j] = 10 + rand() % 91;
        }
    }
    cout << "Программой получена матрица:" << endl;
    for (int i = 0; i < s; i++){
        for (int j = 0; j < s; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < s; i++){
        summa = 0;
        for (int j = 0; j < s; j++){
            summa += a[i][j];
        }
        if (summa > max){
            max = summa;
            maxindex = i + 1;
        }
        cout << "Сумма элементов " << i + 1 << "ой строки: " << summa << endl;
    }
    cout << "Максимальная сумма " << max << " была обнаружена в строке " << maxindex;
}
