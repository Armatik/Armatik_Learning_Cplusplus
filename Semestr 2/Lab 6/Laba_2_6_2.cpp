//
// Created by armatik on 16.05.23.
//
#include <iostream>


int binary_search(int* array, int size, int search_element){
    int left = 0;
    int right = size - 1;
    while (left <= right){
        int middle = (left + right) / 2;
        if (array[middle] == search_element){
            return middle;
        }
        else if (array[middle] > search_element){
            right = middle - 1;
        }
        else{
            left = middle + 1;
        }
    }
    return -1;
}

int main() {
    unsigned first_size, second_size;
    std::cin >> first_size >> second_size;

    int *first_array = new int[first_size];
    int *second_array = new int[second_size];

    for (unsigned i = 0; i < first_size; ++i) {
        std::cin >> first_array[i];
    }
    for (unsigned i = 0; i < second_size; ++i) {
        std::cin >> second_array[i];
    }

    for (unsigned i = 0; i < second_size; ++i) {
        int search_element = second_array[i];
        int count_try = 1;
        int index = binary_search(first_array, first_size, search_element);

        if (index == -1) {
            while (true) {
                index = binary_search(first_array, first_size, search_element - count_try);
                if (index == -1) {
                    index = binary_search(first_array, first_size, search_element + count_try);
                    if (index != -1){
                        std::cout << first_array[index] << std::endl;
                        break;
                    }
                } else {
                    std::cout << first_array[index] << std::endl;
                    break;
                }
            count_try = count_try + 1;
            }
        } else {
            std::cout << first_array[index] << std::endl;
        }
    }
}

/*
 5 5
 1 3 5 7 9
 2 4 8 1 6
 *
 * 1
 * 3
 * 7
 * 1
 * 5
 *
 6 11
 1 1 4 4 8 120
 1 2 3 4 5 6 7 8 63 64 65
 *
 * 1
 * 1
 * 4
 * 4
 * 4
 * 4
 * 8
 * 8
 * 8
 * 8
 */