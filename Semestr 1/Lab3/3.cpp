#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;
int task3_3() {
    int a, b, r;
    cout << "Введите два числа которые мы будем умножать: \n";
    cout << "Первое число a = \n";
    cin >> a;
    cout << "Второе число b =\n";
    cin >> b;
    cout << "Предпологаемый вами ответ = \n";
    cin >> r;
    if(r == (a*b)){
        cout << "Вы ответили правильно! Ответ: " << r;
    } else{
        cout << "Вы ответили не правильно! Правильный ответ: " << r;
    }
    return 0;
}