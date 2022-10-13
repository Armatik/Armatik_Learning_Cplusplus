#include <iostream>
using namespace std;

int Lab5_6()
{
    int array[7];//обЪявляем массив для занесения температуры за неделю
    int count=0;
    cout << "\n";

    cout<<"Понедельник - ";//пользователь вносит данные погоды за каждый день
    cin >> array[0];
    cout<<"Вторник - ";
    cin >> array[1];
    cout<<"Среда - ";
    cin >> array[2];
    cout<<"Четверг - ";
    cin >> array[3];
    cout<<"Пятница - ";
    cin >> array[4];
    cout<<"Суббота - ";
    cin >> array[5];
    cout<<"Воскресенье - ";
    cin >> array[6];

    for (int i = 0; i < 7; i++) {//считаем средную температуру
        count += array[i];
    }
    cout << "Средняя температура за неделю: " <<count / 7;//Выводим среднюю температуру


    return 0;
}