#include <iostream>
#include <windows.h>
using namespace std;


int Lab4_9() {
    int min = 1000000000, x, n;
    for (int i = 0; x != 0; i++) {
        cout << "Введите " << i + 1 << " число: ";
        cin >> x;
        if (x < min && x != 0) {
            min = x;
        }

    }
    cout << "Минимальное: " << min << endl;
}