#include <iostream>
using namespace std;
double* give_array(double *array, int size) {
    array = new double[size];
    return array;
}


void push_array(double *array, int size) {
    for (int i = 0; i < size; i++)
        array[i] = 2 * (i + 1);
}


void show_array(const double *array, int size) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

    cout << "\n";
}


double* get_mem(const double *array) {
    delete[] array;

    return nullptr;
}


int main() {
    double *array = nullptr;
    int size = 0;
    int arraySize = 0;
    cout << "Введите размер массива: ";
    cin >> arraySize;

    array = give_array(array, arraySize);

    push_array(array, size);
    show_array(array, size);
    get_mem(array);


    return 0;
}
