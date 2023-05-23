//
// Created by armatik on 16.05.23.
//
#include <iostream>


int binary_search(int* array, int size, int search_element){ // Функция бинарного поиска
    int left = 0;
    int right = size - 1; // Левая и правая границы поиска
    while (left <= right){ // Пока левая граница не совпадет с правой
        int middle = (left + right) / 2; // Середина массива
        if (array[middle] == search_element){ // Если элемент найден
            return middle; // Возвращаем его индекс
        }
        else if (array[middle] > search_element){ // Если элемент меньше искомого
            right = middle - 1; // Сдвигаем правую границу
        }
        else{ // Если элемент больше искомого
            left = middle + 1; // Сдвигаем левую границу
        }
    }
    return -1; // Если элемент не найден
}

int main() { // Функция main
    unsigned first_size, second_size; // Размеры массивов
    std::cin >> first_size >> second_size; // Вводим размеры массивов

    int *first_array = new int[first_size]; // Создаем массивы
    int *second_array = new int[second_size]; // Создаем массивы

    for (unsigned i = 0; i < first_size; ++i) { // Вводим элементы массивов
        std::cin >> first_array[i]; // Вводим элементы массивов
    }
    for (unsigned i = 0; i < second_size; ++i) { // Вводим элементы массивов
        std::cin >> second_array[i]; // Вводим элементы массивов
    }

    for (unsigned i = 0; i < second_size; ++i) { // Вводим элементы массивов
        int search_element = second_array[i];  // Элемент, который нужно найти
        int count_try = 1;  // Количество попыток
        int index = binary_search(first_array, first_size, search_element); // Индекс элемента, который нужно найти

        if (index == -1) { // Если элемент не найден
            while (true) { // Пока не найдем элемент
                index = binary_search(first_array, first_size, search_element - count_try);
                if (index == -1) { // Если элемент не найден
                    index = binary_search(first_array, first_size, search_element + count_try);
                    if (index != -1){ // Если элемент найден
                        std::cout << first_array[index] << std::endl; // Выводим элемент
                        break;
                    }
                } else { // Если элемент найден
                    std::cout << first_array[index] << std::endl; // Выводим элемент
                    break;
                }
            count_try = count_try + 1; // Увеличиваем количество попыток
            }
        } else {
            std::cout << first_array[index] << std::endl; // Выводим элемент
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