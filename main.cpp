#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;
int main() {
    int a, b;
    string c;
    cout << "Введите номер программы: 1 - Строка, 2 - Квадрат, 3 - Прямоугольный треугольник, 4 - Равноберенный треугольник:" << "\n";
    cin >> a;
    cout << "Введите предпочитаемый символ для отображения:" << "\n";
    cin >> c;
    if (a == 1){
        cout << "Введите длину линии:" << "\n";
        cin >> b;
            for (int counter = b; counter > 0; counter--) {
                cout << c;
            }
    }
    else if (a == 2){
        cout << "Длину стороны квадрата:" << "\n";
        cin >> b;
        for (int counter = b; counter > 0; counter--) {
            for (int counter = b; counter > 0; counter--) {
                cout << c;
            }
            cout << '\n';
        }
    }
    else if (a == 3){
        cout << "Введите длину сторон катетов треугольника:" << "\n";
        cin >> b;
        for (int counter = b; counter > 0; counter--) {
            for (int counter = b; counter > 0; counter--) {
                cout << c;
            }
            cout << '\n';
            b = b - 1;
        }
    }
    else if (a == 4){
        cout << "Введите длину основания равнобедренного треугольника(не чётное значение):" << "\n";
        cin >> b;
        if (b%2==0){cout << "Чётное число, закрываюсь!"; return 0;}
        b = b/2+1;
        int g;
        g=0;
        for (int counter = 0; counter <= b; counter++) {
            for (int counter = 0; counter < g; counter++) {
                cout << c;
            }
            cout << '\n';
            g = g + 1;
        }
        b=b-1;
        for (int counter = b; counter > 0; counter--) {
            for (int counter = b; counter > 0; counter--) {
                cout << c;
            }
            cout << '\n';
            b = b - 1;
        }
    }
    else{
        cout << "Неприемлимое значение программы, закрываюсь!";
    }
    return 0;
}