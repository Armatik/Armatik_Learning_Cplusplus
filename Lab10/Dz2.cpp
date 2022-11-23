//#include <iostream>
//#include <random>
//
//std::random_device rd;
//std::mt19937 gen(rd());
//std::uniform_int_distribution<> dist(1, 9);
//
//class Massiv{
//private:
//    unsigned x;
//    unsigned y;
//    int **hori_arr;
//    int **vert_arr;
//public:
//    explicit Massiv(unsigned x, unsigned y){
//        this->x = x;
//        this->y = y;
//        hori_arr = new int*[y];
//        vert_arr = new int*[x];
//        for (unsigned i = 0; i < y; i++)
//            hori_arr[i] = new int[x];
//        for (unsigned i = 0; i < x; i++)
//            vert_arr[i] = new int[y];
//        for (unsigned i = 0; i < y; i++) {
//            for (unsigned k = 0; k < x; k++) {
//                hori_arr[i][k] = dist(gen);
//            }
//        }
//    }
//    void get_hori_arr() {
//        for (unsigned i = 0; i < y; i++) {
//            for (unsigned k = 0; k < x; k++) {
//                std::cout << hori_arr[i][k] << "|";
//            }
//            std::cout << "\n";
//        }
//    }
//    void get_vert_arr() {
//        for (unsigned i = 0; i < x; i++) {
//            for (unsigned k = 0; k < y; k++) {
//                std::cout << vert_arr[k][i] << "|";
//            }
//            std::cout << "\n";
//        }
//    }
//    void replace_arr(){
//        for (unsigned i = 0; i < x; i++)
//            for (unsigned k = 0; k < y; k++)
//                vert_arr[k][i] = hori_arr[k][i];
//    }
//    ~Massiv(){
//        for (unsigned i = 0; i < y; i++)
//            delete[] hori_arr[i];
//        delete[] hori_arr;
//        for (unsigned i = 0; i < x; i++)
//            delete[] vert_arr[i];
//        delete[] vert_arr;
//    }
//};
//
//
//int main(){
//    Massiv first(5,3);
//    first.get_hori_arr();
//    first.replace_arr();
//    std::cout << "\n";
//    first.get_vert_arr();
//    return 0;
//}
