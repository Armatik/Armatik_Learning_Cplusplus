#include <iostream>
#include <random>


std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> size(2, 16);
std::uniform_int_distribution<> dist(-100, 100);


int main() {
    unsigned arraySize = size(gen), funcGrow = 0, funcDecreasing = 0;
    auto array = new int[arraySize];

    for (unsigned i = 0; i < arraySize; i++) {
        array[i] = dist(gen);
        std::cout << array[i] << ' ';
    }

    std::cout << std::endl;

    bool growing = true;

    if (array[0] < 0) {
        growing = false;
        funcDecreasing++;
    } else
        funcGrow++;

    for (unsigned i = 0; i < arraySize; i++) {
        if (array[i] < 0) {
            if (growing) {
                growing = false;
                funcDecreasing++;
            }
        } else
        if (!growing) {
            growing = true;
            funcGrow++;
        }
    }

    std::cout << "Function increases " << funcGrow << " times" << std::endl;
    std::cout << "Function decreasing " << funcDecreasing << " times" << std::endl;

    delete[] array;

    return 0;
}
