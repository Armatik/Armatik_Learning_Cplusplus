//#include <iostream>
//#include <random>
//
//
//int main() {
//    std::random_device rd;
//    std::mt19937 gen(rd());
//    std::uniform_int_distribution<> dist(-128, 128);
//
//    int *intPtr = new int, randomNumber;
//    *intPtr = dist(gen);
//
//    std::cout << "*intPtr = " << *intPtr << std::endl;
//    delete intPtr;
//
//    intPtr = new int;
//
//    char *charPtr = new char;
//    *charPtr = (char)dist(gen);
//    std::cout << "*charPtr = " << *charPtr << std::endl;
//
//    randomNumber  = dist(gen);
//    std::cout << "New random number for intPtr: " << randomNumber << std::endl;
//    *intPtr = (int)randomNumber;
//
//    std::cout << "*intPtr = " << *intPtr << std::endl;
//    std::cout << "*charPtr = " << *charPtr << std::endl;
//
//    delete charPtr;
//
//    return 0;
//}