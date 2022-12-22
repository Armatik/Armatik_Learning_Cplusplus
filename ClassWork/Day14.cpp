////
//// Created by armatik on 12/22/22.
////
//#include <iostream>
//#include <cmath>
//
//
//class rhomb{
//private:
//    int *cord_1;
//    int *cord_2;
//    int *cord_3;
//    int *cord_4;
//public:
//    rhomb(){ // Конструктор по умолчанию
//        cord_1 = new int [2];
//        cord_2 = new int [2];
//        cord_3 = new int [2];
//        cord_4 = new int [2];
//        cord_1[0] = 59; cord_1[1] = -6;
//        cord_2[0] = -3; cord_2[1] = 64;
//        cord_3[0] = -1; cord_3[1] = 66;
//        cord_4[0] = -2; cord_4[1] = 65;
//    }
//    rhomb(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){ // Конструктор с параметрами координат
//        cord_1 = new int [2];
//        cord_2 = new int [2];
//        cord_3 = new int [2];
//        cord_4 = new int [2];
//        cord_1[0] = x1; cord_1[1] = y1;
//        cord_2[0] = x2; cord_2[1] = y2;
//        cord_3[0] = x3; cord_3[1] = y3;
//        cord_4[0] = x4; cord_4[1] = y4;
//    }
//    ~rhomb(){
//        delete[] cord_1;
//        delete[] cord_2;
//        delete[] cord_3;
//        delete[] cord_4;
//    }
//    void get_lenght(){
//        std::cout << "Сторона 1 = " << sqrt(pow(cord_1[0] - cord_1[2], 2) + pow(cord_2[0] - cord_2[1], 2))
//        << " Сторона 2 = " << sqrt(pow(cord_2[0] - cord_2[2], 2) + pow(cord_3[0] - cord_3[1], 2))
//        << " Сторона 3 = " << sqrt(pow(cord_3[0] - cord_3[2], 2) + pow(cord_4[0] - cord_4[1], 2))
//        << " Сторона 4 = " << sqrt(pow(cord_4[0] - cord_4[2], 2) + pow(cord_1[0] - cord_1[1], 2))
//        << "\n";
//    }
//    void get_perimetr(){
//        std::cout << "Периметр ромба = "
//        <<sqrt(pow(cord_1[0] - cord_1[2], 2) + pow(cord_2[0] - cord_2[1], 2))
//        + sqrt(pow(cord_2[0] - cord_2[2], 2) + pow(cord_3[0] - cord_3[1], 2))
//        + sqrt(pow(cord_3[0] - cord_3[2], 2) + pow(cord_4[0] - cord_4[1], 2))
//        + sqrt(pow(cord_4[0] - cord_4[2], 2) + pow(cord_1[0] - cord_1[1], 2))
//        << "\n";
//    }
//    double get_num_perimetr(){
//        return sqrt(pow(cord_1[0] - cord_1[2], 2) + pow(cord_2[0] - cord_2[1], 2))
//                    + sqrt(pow(cord_2[0] - cord_2[2], 2) + pow(cord_3[0] - cord_3[1], 2))
//                    + sqrt(pow(cord_3[0] - cord_3[2], 2) + pow(cord_4[0] - cord_4[1], 2))
//                    + sqrt(pow(cord_4[0] - cord_4[2], 2) + pow(cord_1[0] - cord_1[1], 2));
//    }
//    void get_ploshad(){
//        std::cout << "Площадь ромба = "
//        <<sqrt(pow(cord_1[0] - cord_1[2], 2) + pow(cord_3[0] - cord_3[1], 2))
//        * sqrt(pow(cord_4[0] - cord_4[2], 2) + pow(cord_2[0] - cord_2[1], 2))
//        * 0.5
//        << "\n";
//    }
//    double get_num_ploshad(){
//        return sqrt(pow(cord_1[0] - cord_1[2], 2) + pow(cord_3[0] - cord_3[1], 2))
//                    * sqrt(pow(cord_4[0] - cord_4[2], 2) + pow(cord_2[0] - cord_2[1], 2))
//                    * 0.5;
//    }
//};
//
//
//int main(){
//    rhomb first{}, second(36, 74, 40, -9, 42, -9, -41, -10);
//    first.get_lenght();
//    first.get_perimetr();
//    first.get_ploshad();
//    second.get_lenght();
//    second.get_perimetr();
//    second.get_ploshad();
//    double temp_ploshd;
//    if (first.get_num_perimetr() < second.get_num_perimetr()){
//        std::cout << "Самый минимальный периметр ромбов = " << first.get_num_perimetr();
//    } else{
//        std::cout << "Самый минимальный периметр ромбов = " << second.get_num_perimetr();
//    }
//    temp_ploshd = (first.get_num_ploshad() + second.get_num_ploshad()) / 2;
//    std::cout << "\n" << "Средняя площадь ромбов = " << temp_ploshd;
//}