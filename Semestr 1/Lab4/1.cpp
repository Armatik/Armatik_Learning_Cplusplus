#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;
int Lab4_1() {
int h, w;
h = 4;
w = h*2;
        for(int c = 0; c <= h; c++){
            for(int c1 = 1;c1 <= c;c1++){
                cout << " ";
            }
            for(int c2 = 1; c2 <= w - c * 2;c2++){
                cout << "#";
            }
            cout << "\n";
        }
    return 0;
}