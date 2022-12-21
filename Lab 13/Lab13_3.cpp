////
//// Created by Sfomc on 21.12.2022.
////
//#include <iostream>
//#include <cmath>
//
//
//class triangle{
//private:
//    unsigned *lenght;
//public:
//    triangle(){
//        this->lenght = new unsigned;
//        *this->lenght = 10;
//
//    }
//
//    triangle(const unsigned &lenght){
//        this->lenght = new unsigned;
//        *this->lenght = lenght;
//    }
//    void get_triangle_info(){
//        std::cout << "Длина стороны треугольника: " << *this->lenght << " Периметр треугольника: " << *this->lenght * 3 << " Площадь треугольника: "
//        << ((*this->lenght * *this->lenght * sqrt(3)) / 2) << "\n";
//    }
//};
//
//int main() {
//    triangle first(10), second(25), third(1);
//    first.get_triangle_info();
//    second.get_triangle_info();
//    third.get_triangle_info();
//    return 0;
//}