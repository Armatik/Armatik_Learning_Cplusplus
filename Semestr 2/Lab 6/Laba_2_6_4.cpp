//
// Created by armatik on 16.05.23.
//
#include <deque>
#include <iostream>
#include <string>

void MakeTrain() {
    using Wagon = int;
    std::deque<Wagon> train; // Поезд

    std::string command; // Команда для поезда
    Wagon wagon; // Вагон
    size_t k; // Количество вагонов
    std::cin >> command; // Вводим команду
    while (command != "END") { // Пока не введем команду END
        if (command == "+left") { // Если команда +left
            std::cin >> wagon; // Вводим вагон
            train.push_front(wagon); // Добавляем вагон в начало поезда
        } else if (command == "+right") { // Если команда +right
            std::cin >> wagon; // Вводим вагон
            train.push_back(wagon); // Добавляем вагон в конец поезда
        } else if (command == "-left") { // Если команда -left
            std::cin >> k; // Вводим количество вагонов
            k = std::min(k, train.size()); // Не удаляем больше, чем есть
            train.erase(train.begin(), train.begin() + k); // Удаляем вагоны
        } else if (command == "-right") { // Если команда -right
            std::cin >> k; // Вводим количество вагонов
            k = std::min(k, train.size()); // Не удаляем больше, чем есть
            train.erase(train.end() - k, train.end()); // Удаляем вагоны
        }
        std::cin >> command; // Вводим следующую команду
    }

    for (const auto& wagon : train) { // Печатаем поезд
        std::cout << wagon << " "; // Печатаем вагон
    }
    std::cout << "\n"; // Переходим на новую строку
}

int main() {
    MakeTrain();
    return 0;
}

/*
+left 1
+right 2
+left 3
-right 1

3 1
 */