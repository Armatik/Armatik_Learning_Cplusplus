#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;
int Lab4_6() {
    int min, now, c;
    cout << "Вводите последовательности чисел, Для завершения ввода введите -1: ";
    min = 100000;
    cin >> now;
    c = true;
    while(c == true){
        if(now == -1) {
            cout << "Ввод завершён. Результат: " << min;
            return 0;
        }
        else if(now < min){
            min = now;
        }
        else{
            continue;
        }
        cin >> now;
    }
    return 0;
}