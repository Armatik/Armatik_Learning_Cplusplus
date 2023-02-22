#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;
int Lab6_1()  {
        double **p =0;
        *(*(p = new double*) = new double) = 2;
        cout << **p;
        delete *p;
        delete p;
    return 0;
}