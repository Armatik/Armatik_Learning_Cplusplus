#include <iostream>
using namespace std;
int dz_3_3()
{
    int height = 0; // высота треугольника
    cout << "Введите высоту  равнобедренного треугольника: ";
    cin >> height;
    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j < height - i; j++)
        {
            cout << ' ';
        }
        for (int j = height - 2 * i; j <= height; j++)
        {
            cout << '^';
        }
        cout << endl;
    }
    return 0;
}