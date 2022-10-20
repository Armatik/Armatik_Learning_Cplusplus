#include <iostream>
using namespace std;

void fill_array(int **array, const int &rows, const int &columns) {
    srand(time(nullptr));

    for (int i = 0; i < rows; i++)
        for (int k = 0; k < columns; k ++)
            array[i][k] = rand() % 11 + 50;
}


void show_array(int **array, const int &rows, const int &columns) {
    for (int i = 0; i < rows; i++) {
        for (int k = 0; k < columns; k++)
            cout << array[i][k] << " ";
        cout << "\n";
    }
}


int Lab6_4() {
    system( "chcp 65001");
    int rows, columns, **array;
    cout << "Введите количество строк и столбцов через пробел.";
    cin >> rows >> columns;

    array = new int*[rows];
    for (int i = 0; i < rows; i++)
        array[i] = new int[columns];

    fill_array(array, rows, columns);
    show_array(array, rows, columns);

    return 0;
}
