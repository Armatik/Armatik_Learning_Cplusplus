#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;


int Lab4_8() {
    int num, sum = 0, cnt = -1;
    float sr;
    for (int i = num; num !=0; i--) {
        cout << "-> ";
        cin >> num;
        cnt += 1;
        sum += num;
    }
    sr = sum / cnt;
    cout << "Введено чисел: " << cnt << endl << "Сумма чисел: " << sum << endl;
    cout << "Среднее арифмитическое: " << fixed << setprecision(2) << sr << endl;
}