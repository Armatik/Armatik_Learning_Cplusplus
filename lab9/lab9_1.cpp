//#include <iostream>
//#include <string>
//#include <random>
//using namespace std;
////#include "Lab2/16.cpp"
//random_device rd;
//mt19937 gen(rd());
//uniform_int_distribution<> dataForGen(0, 255);
//
//
//
//char* rangen(unsigned &size);//Генератор рандомных массивов.
//
//int main() {
//    unsigned arrSecondSize = dataForGen(gen);
//    auto **Text = new char *[arrSecondSize];
//
//    for (unsigned i = 0; i < arrSecondSize; i++) {
//        unsigned arrFirstSize = dataForGen(gen);
//        Text[i] = new char[arrFirstSize];
//        char *array = rangen(arrFirstSize);
//        Text[i] = array;
//    }
//
//    for (unsigned i = 0; i < arrSecondSize; i++) {
//        cout << i << " = " << Text[i] << "\n";
//        delete[] Text[i];
//    }
//    delete[] Text;
//
//    return 0;
//}
//
//
//char* rangen(unsigned &size) {
//    auto array = new char[size];
//    for (unsigned i = 0; i < size; i++) {
//        array[i] = (char) dataForGen(gen);
//    }
//    return array;
//}