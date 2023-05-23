//
// Created by armatik on 16.05.23.
//
#include <deque>
#include <iostream>
#include <string>

void MakeTrain() {
    using Wagon = int;
    std::deque<Wagon> train;

    std::string command;
    Wagon wagon;
    size_t k;
    std::cin >> command;
    while (command != "END") {
        if (command == "+left") {
            std::cin >> wagon;
            train.push_front(wagon);
        } else if (command == "+right") {
            std::cin >> wagon;
            train.push_back(wagon);
        } else if (command == "-left") {
            std::cin >> k;
            k = std::min(k, train.size());
            train.erase(train.begin(), train.begin() + k);
        } else if (command == "-right") {
            std::cin >> k;
            k = std::min(k, train.size());
            train.erase(train.end() - k, train.end());
        }
        std::cin >> command;
    }

    for (const auto& wagon : train) {
        std::cout << wagon << " ";
    }
    std::cout << "\n";
}