#include <iostream>
using namespace std;

int main() {
    int n, n1, n2, n3;
    cin >> n;
    n1 = n / 100;
    n2 = n / 10 - (n1 * 10);
    n3 = n - ((n2 * 10) + (n1 * 100));
    cout << n1 + n2 + n3;
    return 0;
}