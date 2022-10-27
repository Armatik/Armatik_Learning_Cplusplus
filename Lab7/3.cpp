#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;

int cubic_rand() {//  Заполняем и выводим массив
    srand(time(nullptr));
    int i;
    i = 0;
    i = 1 + rand() % 6;
    return i;

}
int main(){
    system( "chcp 65001");
    cout << "Игра в кубик. Первый ход за: ";
    int comp[4], user[4];
    cout << cubic_rand();
    cout << cubic_rand();
    cout << cubic_rand();
    cout << cubic_rand();
    return 0;
}