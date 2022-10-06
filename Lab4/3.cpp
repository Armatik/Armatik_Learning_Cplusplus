#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;
int Lab4_3() {
    int h, w;
    h = 4;
    w = h*2;
    for(int c = 0; c <= h; c++){
        for(int c1 = 1;c1 <= c;c1++){
            cout << " ";
        }
        for(int c2 = 0; c2 <=c;c2++){
            cout << "#";
        }
        for(int c3 = 1;c3 <= (h-c)*2;c3++){
            cout << "  ";
        }
        for(int c4 = 0; c4 <=c;c4++){
            cout << "#";
        }
        cout << "\n";
    }
    for(int c = h; c >= 0; c--){
        for(int c1 = c;c1 > 0;c1--){
            cout << " ";
        }
        for(int c2 = c; c2 >= 0;c2--){
            cout << "#";
        }
        for(int c3 = (h-c)*2;c3 > 0;c3--){
            cout << "  ";
        }
        for(int c4 = c; c4 >= 0;c4--){
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}