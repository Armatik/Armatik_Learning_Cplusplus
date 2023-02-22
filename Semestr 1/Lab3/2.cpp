#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;
int task2_2() {
    int palec;
    cout << "Введите номер пальца правой руки начиная с большого:\n";
    cin >> palec;
    if (palec == 1){
        cout << "Это большой палец";
    }
    else if (palec == 2){
        cout << "Это укзательный палец";
    }
    else if (palec == 3){
        cout << "Это средний палец";
    }
    else if (palec == 4){
        cout << "Это безимянный палец";
    }
    else if (palec == 5){
        cout << "Это мезинец палец";
    }
    else {
        cout << "У вас на руке больше 5 пальец? Я звоню в полицию!";
    }
    return 0;
}