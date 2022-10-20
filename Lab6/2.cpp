#include <iostream>
using namespace std;

double* give_array(double *array, const int &size) {
    array = new double[size];
    return array;
}


void push_array(double *array, const int &size) {
    srand(time(nullptr));

    for (int i = 0; i < size; i++)
        array[i] = 10 + rand() % 41;
}


void show_array(const double *array, const int &size) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

    cout << endl;
}


void get_mem(const double *array) { delete[] array; }


int main() {
    system( "chcp 65001");
    int userAnswer;

    do {
        double *array = nullptr;

        int arraySize = 0;
        cout << "Введие размер массива: "; cin >> arraySize;

        array = give_array(array, arraySize);

        push_array(array, arraySize);
        show_array(array, arraySize);
        get_mem(array);

        cout << "Если вы хотите прекратить генерировать массивы введите 0: "; cin >> userAnswer;
    } while (userAnswer);

    return 0;
}