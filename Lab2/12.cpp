#include <iostream>
using namespace std;
int task2_12() {
    double V, pi = 3.1415, r, S;
    cin >> r;
    V = 3*pi*r*r*r/4;
    S = 4*pi*r*r;
    cout << V << " " << S;
    return 0;
}