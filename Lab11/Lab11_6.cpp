#include <iostream>
#include <cmath>


class square{
private:
    unsigned *radius;
public:
    square(){
        this->radius = new unsigned (10);
    }
    square(const unsigned &radius){
    this->radius = new unsigned (radius);
    }
    ~square(){
        delete this->radius;
    }
    void set_radius(const unsigned &radius){
        *this->radius = radius;
    }
    unsigned get_radius(){
        return *this->radius;
    }
    double get_ploshad(){
        return (3.14*((*radius) * (*radius)));
    }
    unsigned get_perimeter(){
        return (2 * 3.14 * (*radius));
    }
};


int main() {
    unsigned c;
    unsigned temp_unsg;
    std::cout << "Введите количество окружностей для которых будете производить расчёты: ";
    std::cin >> c;
    std::cout << "\n";

    square *box = new square[c];
    for (unsigned i = 0; i < c; i++){
        std::cout << "Введите радиус окружности: " << i+1 << ": ";
        std::cin >> temp_unsg;
        std::cout << "\n";
        (box[i]).set_radius(temp_unsg);
    }
    for (unsigned i = 0; i < c; i++){
        std::cout << "Данные для окружности " << i+1 << ":" << "\n" << "Радиус: " << (box[i]).get_radius()
        << "\n" << "Длина окружности: " << (box[i]).get_perimeter()
        << "\n" << "Площадь: " << (box[i]).get_ploshad() << "\n" << "\n";
    }
}