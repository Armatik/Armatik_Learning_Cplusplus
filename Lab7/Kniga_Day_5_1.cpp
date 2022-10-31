/* 1 и 2 задание */
#include <iostream>


int Perimeter(unsigned long int height, short weight);


int mauuuuuuun() {
    unsigned long int height;
    short weight;
    while (true) {
        std::cout << "Enter the height and width seperated by a space respectively: "; std::cin >> height >> weight;
        if (height >= 0 && weight >= 0)
            break;
        else
            std::cout << "Height and width must be >= 0" << std::endl;
    }
    Perimeter(height, weight);

    return 0;
}


int Perimeter(unsigned long int height, short weight) { return (int)height * 2 + weight * 2; }
