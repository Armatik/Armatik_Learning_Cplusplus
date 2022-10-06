#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;
int Lab4_7(){
cout << setw(6) << "Y" << setw(6) << "X" << endl;
for (float i = -4;i <= 4; i += 0.5)
    cout << setw(6) << abs(i - 2) + abs(i + 1) << setw(6) << i << endl;

}