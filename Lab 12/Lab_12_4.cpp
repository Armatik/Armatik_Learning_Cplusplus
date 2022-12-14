#include <iostream>
#include <random>


std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> size(2, 64);
std::uniform_int_distribution<> dist(32, 127);


int main() {
    unsigned arraySize = size(gen);
    auto str = new char[arraySize];

    for (unsigned i = 0; i < arraySize; i++) {
        str[i] = (char)dist(gen);
        std::cout << str[i] << ' ';
    }

    std::cout << std::endl;

    for (unsigned i = 0; i < arraySize; i++) {
        if (str[i] == '+') {
            for (unsigned k = 0; k < i; k++) {
                int nowSymbol = (int)(unsigned char)str[k];

                switch (nowSymbol) {
                    case 48:
                    case 49:
                    case 50:
                    case 51:
                    case 52:
                    case 53:
                    case 54:
                    case 55:
                    case 56:
                    case 57:
                        str[k] = '-';
                        break;
                    default:
                        break;
                }
            }

            break;
        }
    }

    for (unsigned i = 0; i < arraySize; i++)
        std::cout << str[i] << ' ';

    delete[] str;

    return 0;
}
