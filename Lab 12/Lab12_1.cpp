#include <iostream>


int main() {
    auto firstWord = new std::string;
    unsigned spaces = 0;
    char lastChar = 0;

    std::cout << "Enter the first word and second by space respectability: "; std::getline(std::cin, *firstWord);

    for (char i: *firstWord)
        if (i == ' ')
            spaces++;
        else if ((int) i >= 97 && (int) i <= 122)
            lastChar = i;

    if (spaces == 0)
        return 1;

    if (::tolower((int)lastChar) == ::tolower((*firstWord)[0]))
        std::cout << "Words fulfill the condition of the task" << std::endl;
    else
        std::cout << "Words do not fulfill the condition of the task"  << std::endl;

    delete firstWord;

    return 0;
}
