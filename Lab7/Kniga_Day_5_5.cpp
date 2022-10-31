///* 5 и 6 номер */
//#include <iostream>
//
//
//double division(unsigned short int numeration, unsigned short int denominator);
//
//
//int main() {
//    unsigned short int numeration, denominator;
//    while (true) {
//        std::cout << "Enter the numeration and denominator seperated by a space respectively: "; std::cin >> numeration >> denominator;
//        if (numeration >= 0 && denominator >= 0)
//            break;
//        else
//            std::cout << "Number must be >= 0" << std::endl;
//    }
//
//    std::cout << division(numeration, denominator) << std::endl;
//
//    return 0;
//}
//
//
//double division(unsigned short int numeration, unsigned short int denominator) {
//    if (denominator)
//        return (double)numeration / denominator;
//    return -1.0;
//}
