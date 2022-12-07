//#include <iostream>
//#include <cmath>
//
//
//class square{
//private:
//    unsigned *radius;
//public:
//    square(){
//        this->radius = new unsigned (10);
//    }
//    square(const unsigned &radius){
//    this->radius = new unsigned (radius);
//    }
//    ~square(){
//        delete this->radius;
//    }
//    void set_radius(const unsigned &radius){
//        *this->radius = radius;
//    }
//    unsigned get_radius(){
//        return *this->radius;
//    }
//    unsigned get_ploshad(){
//        return ((*this->radius) * (*this->radius));
//    }
//
//    unsigned get_perimeter(){
//        return ((*this->radius) * 4);
//    }
//    double get_diagonal(){
//        return ((*this->radius) * sqrt(2));
//    }
//};
//
//
//int main() {
//    unsigned c;
//    unsigned temp_unsg;
//    std::cout << "Введите количество квадратов для которых будете производить расчёты: ";
//    std::cin >> c;
//    std::cout << "\n";
//
//    square *box = new square[c];
//    for (unsigned i = 0; i < c; i++){
//        std::cout << "Введите длину стороны квадрата " << i+1 << ": ";
//        std::cin >> temp_unsg;
//        std::cout << "\n";
//        (box[i]).set_radius(temp_unsg);
//    }
//    for (unsigned i = 0; i < c; i++){
//        std::cout << "Данные для квадрата " << i+1 << ":" << "\n" << "Длина стороны: " << (box[i]).get_radius()
//        << "\n" << "Диагональ: " << (box[i]).get_diagonal() << "\n" << "Периметр: " << (box[i]).get_perimeter()
//        << "\n" << "Площадь: " << (box[i]).get_ploshad() << "\n" << "\n";
//    }
//}