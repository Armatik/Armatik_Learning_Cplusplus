#include <iostream>


void fill_array(int array[5][5]) {
    for (int i = 0, summa = 0; i < 5; i++)
        for (int k = 0; k < 5; k++, summa++)
            array[i][k] = summa;
}


int mauuuun() {
    int array[5][5];

    fill_array(array);

    for (auto & i : array)
        for (int k : i)
            std::cout << k << std::endl;

    return 0;
}
