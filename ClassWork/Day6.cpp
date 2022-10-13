#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;
void refParamF(int &x){
    x=10;
}
int Day_6 (){
    int number = 5;
    refParamF(number);
    cout << number <<"\n";
}