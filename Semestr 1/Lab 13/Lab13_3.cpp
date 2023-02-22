////
//// Created by Sfomc on 21.12.2022.
////
//#include <iostream>
//#include <cmath>
//
//
//class triangle{
//private:
//    unsigned *lenght;   // Длина стороны треугольника
//public:
//    triangle(){     // Констркутор по умолчанию с длиной стороны 10
//        this->lenght = new unsigned;
//        *this->lenght = 10;
//    }
//    triangle(const unsigned &lenght){   // Конструктор принимающий значение стороны треугольника
//        this->lenght = new unsigned;
//        *this->lenght = lenght;
//    }
//    ~triangle(){ // Деструктор
//        delete lenght;
//    }
//    void get_triangle_info(){ // Метод вывода необходимой информации о треугольнике.
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