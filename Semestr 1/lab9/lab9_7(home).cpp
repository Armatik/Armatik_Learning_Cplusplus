//#include <iostream>
//#include <string>
//#include <random>
////#include "Lab2/16.cpp"
//
//
//std::random_device rd;
//std::mt19937 gen(rd());
//std::uniform_int_distribution<> dataForGen(0, 255);
//std::uniform_int_distribution<> sizeWord(1, 20);
//std::uniform_int_distribution<> sizeArray(1, 100);
//
//
//
//char* rangen(unsigned &vecSize);
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
//        char *array = rangen(firstLaySize);
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
//char* rangen(unsigned &vecSize) {
//    auto array = new char[vecSize];
//
//    for (unsigned i = 0; i < vecSize; i++)
//        array[i] = (char)dataForGen(gen);
//
//    return array;
//}
