#include <iostream>
using namespace std;
int task2_11() {
    double cost, kg, summa;
    cout << "Вычисление стоимости покупки." << endl;
    cout << "Введите исходные данные:" << endl;
    cout << "Цена одного килограмма яблок (руб.) -> ";
    cin >> cost;
    cout << "Вес яблок (кг) -> ";
    cin >> kg;
    summa = cost * kg;
    cout << "Стоимость покупки: " << summa << " руб.";
    return 0;
}