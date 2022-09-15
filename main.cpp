#include <iostream>
using namespace std;

int main() {
    int h, a, b, c;
    cin >> h >> a >> b;
    c = a - b;
    cout << (h - a + c -1) / c + 1;
    return 0;
}