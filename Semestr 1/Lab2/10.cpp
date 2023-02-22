#include <iostream>
using namespace std;
int task2_10() {
    double cost1, cost2, num, summa;
    cout << "Вычисление стоимости покупки." << endl;
    cout << "Введите исходные данные:" << endl;
    cout << "Цена тетради (руб.) -> ";
    cin >> cost1;
    cout << "Цена обложки (руб.) -> ";
    cin >> cost2;
    cout << "Количество комплектов (шт.) -> ";
    cin >> num;
    summa = (cost1 + cost2) * num;
    cout << "Стоимость покупки: " << summa << " руб.";
    return 0;
}