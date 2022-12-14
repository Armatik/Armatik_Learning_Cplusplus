#include <iostream>
#include <random>


std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> size(2, 16);
std::uniform_int_distribution<> dist(-100, 100);


int main() {
    unsigned arraySize = size(gen);
    auto array = new int[arraySize];
    int max = INT32_MIN, min = INT32_MAX, maxElem, minElem;

    for (unsigned i = 0; i < arraySize; i++) {
        array[i] = dist(gen);
        std::cout << array[i] << ' ';

        if (array[i] > max) {
            max = array[i];
            maxElem = (int)i;
            continue;
        }

        if (array[i] < min) {
            min = array[i];
            minElem = (int)i;
        }
    }

    std::cout << std::endl;

    for (unsigned i = 0; i < arraySize; i++) {
        if (i == maxElem)
            array[i] = min;

        if (i == minElem)
            array[i] = max;

        std::cout << array[i] << ' ';
    }

    delete[] array;

    return 0;
}
