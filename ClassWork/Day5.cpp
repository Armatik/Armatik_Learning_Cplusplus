#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;
int Day_5() {
    const int array_size = 10;
    int intArray[array_size] = {4,5,7,3,2,1,8,9,7,9,};
    int targetValue = 3;
    int targetPos = 0;
    while ((intArray[targetPos]!=targetValue) and (targetPos<array_size))targetPos++;
    return 0;
}