#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;
int Lab4_4() {
    int n, r;
    cout << "Введите максимальное число последовательности: ";
    cin >> n;
    cout << "\n";
    r = 0;
    for (int c=0;c <=n;c++){
        r=r+c;
    }
    cout << "Сумма всех чисел последовательности: " << r;
    return 0;
}