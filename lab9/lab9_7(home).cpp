//#include <iostream>
//#include <string>
//#include <random>
////#include "Lab2/16.cpp"
//
//
//std::random_device rd;
//std::mt19937 gen(rd());
//std::uniform_int_distribution<> dist(0, 255);
//std::uniform_int_distribution<> sizeWord(1, 20);
//std::uniform_int_distribution<> sizeArray(1, 100);
//
//
//
//char* generator(unsigned &size);
//
//
//int main(){
//    unsigned secondLaySize = sizeArray(gen);
//    auto **txt = new char *[secondLaySize];
//
//    for (unsigned i = 0; i < secondLaySize; i++) {
//        unsigned firstLaySize = sizeWord(gen);
//
//        txt[i] = new char[firstLaySize];
//
//        char *array = generator(firstLaySize);
//
//        txt[i] = array;
//    }
//
//    for (unsigned i = 0; i < secondLaySize; i++)
//        std::cout << i << " = " << txt[i] << std::endl;
//
//    for (unsigned i = 0; i < secondLaySize; i++)
//        delete[] txt[i];
//
//    delete[] txt;
//
//    return 0;
//}
//
//
//char* generator(unsigned &size) {
//    auto array = new char[size];
//
//    for (unsigned i = 0; i < size; i++)
//        array[i] = (char)dist(gen);
//
//    return array;
//}
