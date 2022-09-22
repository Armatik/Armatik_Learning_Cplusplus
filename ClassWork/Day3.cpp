#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;
int day3() {
    int i, j;
    for(i = 10, j = 90; i<j; i+=5, j=-10){
        cout << i << ' ' << '\n';
    }
    return 0;
}