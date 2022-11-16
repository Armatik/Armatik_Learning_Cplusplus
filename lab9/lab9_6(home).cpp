//#include <iostream>
//#include <random>
//
//
//
//int main() {
//    std::random_device rd;
//    std::mt19937 gen(rd());
//    std::uniform_int_distribution<> dist(-100, 100);
//
//    unsigned M = 7, N = 9;
//
//    int **array = new int *[M];
//
//    for (unsigned i = 0; i < M; i++)
//        array[i] = new int[N];
//
//    for (unsigned i = 0; i < M; i++)
//        for (unsigned k = 0; k < N; k++)
//            array[i][k] = dist(gen);
//
//    for (unsigned i = 0; i < M; i++) {
//        for (unsigned k = 0; k < N; k++)
//            std::cout << array[i][k] << ' ';
//
//        std::cout << std::endl;
//    }
//
//    for (unsigned i = 0; i < M; i++)
//        delete[] array[i];
//
//    delete[] array;
//
//    return 0;
//}
