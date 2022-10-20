#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;

int *mpoint(int &n, int &m){
    if(n>m)
        return &n;
        else return &m;
}

int main (){
    int n=3, m= 5;
    int *p;
    p=mpoint(n,m);
    (*p)++;
    cout<<"n="<<n<<"\n";
    cout<<"m="<<m<<"\n";
    return 0;
}