#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;
int main() {
    int h, a, b, c;
    cin >> h >> a >> b;
    c = a - b;
    cout << (h - a + c -1) / c + 1;
    return 0;
}