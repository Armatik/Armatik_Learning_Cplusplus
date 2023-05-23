#include <iostream>
#include <map>
#include <set>
#include <string>

int main() {
    std::map<char, int> counter; // Подсчитываем частоты букв
    std::string word; // Слово
    int wordsCount = 0; // Количество слов
    std::cin >> word; // Считываем первое слово
    while (word != "END") { // Пока не встретим слово END
        ++wordsCount; // Увеличиваем счетчик слов
        std::set<char> letters(word.begin(), word.end()); // Собираем множество букв в слове
        for (char c : letters) { // Для каждой буквы в слове
            ++counter[c]; // Увеличиваем счетчик буквы
        }
        std::cin >> word; // Считываем следующее слово
    }
    for (auto [c, freq] : counter) { // Для каждой буквы и ее частоты
        if (freq == wordsCount) { // Если частота равна количеству слов
            std::cout << c; // Печатаем букву
        }
    }
    std::cout << "\n";
}

/*
alpha
beta
gamma

a
 */

/*
alpha
beta
gamma
delta
epsilon

---
 */