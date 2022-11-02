#include <iostream>


double degree(double number, unsigned numberDegree);


int main() {
    double number, result;
    unsigned numberDegree;

    std::cout << "Enter the number and number's degree seperated by a space respectively: "; std::cin >> number >> numberDegree;

    result = degree(number, numberDegree);
    std::cout << result << std::endl;

    return 0;
}


double degree(double number, unsigned numberDegree) {
    static double constant = number;
    number *= constant;
    numberDegree--;

    if (numberDegree)
        return degree(number, numberDegree);

    return number / constant;
}
