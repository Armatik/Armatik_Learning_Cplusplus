#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;
int DAY4_1() {
int a, b;
string c;
cout << "Введите номер программы: 1 - строка, 2 - Квадрат, 3 - прямоугольный треугольник:" << "\n";
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
return 0;
}