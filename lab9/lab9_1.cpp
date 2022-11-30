//#include <iostream>
//#include <string>
//#include <random>
////#include "Lab2/16.cpp"
//std::random_device rd;
//std::mt19937 gen(rd());
//std::uniform_int_distribution<> dist(0, 255);
//
//
//
//char* rangen(unsigned &size) {
//    auto array = new char[size];
//
//    for (unsigned i = 0; i < size; i++)
//        array[i] = (char)dist(gen);
//
//    return array;
//}
//
//
//int main(){
//    unsigned secondLaySize = dist(gen);
//    auto **txt = new char*[secondLaySize];
//
//    for (unsigned i = 0; i < secondLaySize; i++) {
//        unsigned firstLaySize = dist(gen);
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
//    return 0;
//}