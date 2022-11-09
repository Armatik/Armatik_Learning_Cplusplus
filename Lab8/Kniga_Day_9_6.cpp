//#include <iostream>
//#include <random>
//
//
//int main() {
//    std::random_device rd;
//    std::mt19937 gen(rd());
//    std::uniform_int_distribution<> dist(0, 100);
//
//    long long counter = 0;
//
//    std::cout << "Without stack overflow and with default array:" << std::endl;
//    while (true) {
//        if (!(counter % 100000)) {
//            bool userAnswer;
//            std::cout << "Do you want to continue?: "; std::cin >> userAnswer;
//            if (!userAnswer)
//                break;
//        }
//
//        int array[dist(gen)];
//
//        for (int i = 0; i < sizeof(array) / sizeof(int); i++)
//            array[i] = dist(gen);
//
//        counter++;
//    }
//
//    std::cout << std::endl << std::endl << "Without stack overflow and with dynamic array:" << std::endl;
//    while (true) {
//        if (!(counter % 100000)) {
//            bool userAnswer;
//            std::cout << "Do you want to continue?: "; std::cin >> userAnswer;
//            if (!userAnswer)
//                break;
//        }
//        int arraySize = dist(gen);
//        int *array = new int[arraySize];
//
//        for (int i = 0; i < arraySize; i++)
//            array[i] = dist(gen);
//
//        delete[] array;
//        counter++;
//    }
//
//    std::cout << std::endl << std::endl << "With stack overflow and with dynamic array:" << std::endl;
//    while (true) {
//        if (!(counter % 100000)) {
//            bool userAnswer;
//            std::cout << "Do you want to continue?: "; std::cin >> userAnswer;
//            if (!userAnswer)
//                break;
//        }
//        int arraySize = dist(gen);
//        int *array = new int[arraySize];
//
//        for (int i = 0; i < arraySize; i++)
//            array[i] = dist(gen);
//
//        counter++;
//    }
//
//    return 0;
//}
//
//
//
