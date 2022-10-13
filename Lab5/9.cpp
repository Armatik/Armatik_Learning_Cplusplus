#include <iostream>

using namespace std;

int Lab5_9()
{
    int A[10], n, count = 0;

    cout << "Введите 10 чисел: ";  // наполняем массив
    for (int i=0; i<10; i++)
        cin >> A[i];

    cout << "Введите число для поиска в массиве: "; // задаём число для поиска
    cin >> n;

    bool b = false;
    for (int i=0; i<10; i++)  // Сравниваем число и массив
        if (A[i] == n)
        {
            b = true;
            count++;
        }

    if (b)
        cout << "Число найдено в массиве: "<< count;
    else
        cout << "Такого числа нет в массиве" << endl;

    return 0;
}
