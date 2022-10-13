#include <vector>
#include <iostream>
using namespace std;

int Lab5_12()
{
    vector <int> newVector;

    int count = 0;
    int cinon, check, muse;
    cout << "*** Анализ роста учеников ***\nВведите рост (см) и нажмите Enter\nДля завершения введите 0 и нажмите Enter"<< endl;
    while(true){
        cout << "-> ";
        cin >> cinon;
        if (cinon == 0){
            break;
        }
        newVector.push_back(cinon);
        count += cinon;
        check++;
    }
    muse = count / check;
    count = 0;
    for (int i = 0; i < check; i++) {
        if(newVector[i] > muse){
            count++;
        }
    }
    cout << "Количество учеников выше среднего роста состовляет: "<< count<< endl;
    cout << "Количество учеников: "<< check;


    return 0;
}


