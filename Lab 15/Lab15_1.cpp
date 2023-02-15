//
// Created by Sfomc on 15.02.2023.
//
#include <iostream>
#include <cmath>

class triangle {
protected:
    double a, b, c;
public:
    triangle() = default;

    triangle(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    double getA() const {
        return a;
    }

    double getB() const {
        return b;
    }

    double getC() const {
        return c;
    }

    double getPerimeter() const {
        return a + b + c;
    }

    double getArea() const {
        double p = getPerimeter() / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    bool isTriangle() const {
        return a + b > c && a + c > b && b + c > a;
    }

    void getlength(){
        std::cout << "a = " << a << " b = " << b << " c = " << c << std::endl;
    }
    double getcornerA(){
        return acos((b*b+c*c-a*a)/(2*b*c));
    }
    double getgornerB(){
        return acos((a*a+c*c-b*b)/(2*a*c));
    }
    double getcornerC(){
        return acos((a*a+b*b-c*c)/(2*a*b));
    }
};

class iscelleneous : public triangle {
public:
    iscelleneous(double a, double b, double c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
    bool isIsosceles() const {
        return a == b || a == c || b == c;
    }
};

int main(){
    // генератор обьектов класса trinagle с рандомными значениями сторон использая рандомный генератор c++11, проверкой на треугольник методом isTriangle(), если сгенерировался не треугольник то перегенерировать его пока не получится треугольник и выводом на экран.
    triangle *ptr1 = new triangle(rand()%100+1,rand()%100+1,rand()%100+1);
    while(!ptr1->isTriangle()){
        ptr1 = new triangle(rand()%100+1,rand()%100+1,rand()%100+1);
    }
    ptr1->getlength();
    std::cout << "Perimeter = " << ptr1->getPerimeter() << std::endl;
    std::cout << "Area = " << ptr1->getArea() << std::endl;
    std::cout << "cornerA = " << ptr1->getcornerA() << std::endl;
    std::cout << "cornerB = " << ptr1->getgornerB() << std::endl;
    std::cout << "cornerC = " << ptr1->getcornerC() << std::endl;
    //вывод средней площади треугольников в массиве ptr1
    double aper = 0;
    for(int i = 0; i < 10; i++){
        aper += ptr1[i].getArea();
    }
    std::cout << "Average area = " << aper/10 << std::endl;
    delete ptr1;
    // генератор обьектов класса iscelleneous с рандомными значениями сторон использая рандомный генератор c++11, проверкой на треугольник методом isTriangle(), если сгенерировался не треугольник то перегенерировать его пока не получится треугольник и выводом на экран.
    iscelleneous *ptr2 = new iscelleneous(rand()%100+1,rand()%100+1,rand()%100+1);
    while(!ptr2->isTriangle()){
        ptr2 = new iscelleneous(rand()%100+1,rand()%100+1,rand()%100+1);
    }
    ptr2->getlength();
    std::cout << "Perimeter = " << ptr2->getPerimeter() << std::endl;
    std::cout << "Area = " << ptr2->getArea() << std::endl;
    std::cout << "cornerA = " << ptr2->getcornerA() << std::endl;
    std::cout << "cornerB = " << ptr2->getgornerB() << std::endl;
    std::cout << "cornerC = " << ptr2->getcornerC() << std::endl;
    //вывод данных о треугольнике с минимальной площадью в массиве ptr2
    double min = 1000000;
    int index = 0;
    for(int i = 0; i < 10; i++){
        if(ptr2[i].getArea() < min and ptr2[i].isIsosceles()){
            min = ptr2[i].getArea();
            index = i;
        }
    }

    std::cout << "index iscelleneous trinagle with min area is = " << index << std::endl;
    ptr2[index].getlength();
    std::cout << "Perimeter = " << ptr2[index].getPerimeter() << std::endl;
    std::cout << "Area = " << ptr2[index].getArea() << std::endl;
    std::cout << "cornerA = " << ptr2[index].getcornerA() << std::endl;
    std::cout << "cornerB = " << ptr2[index].getgornerB() << std::endl;
    std::cout << "cornerC = " << ptr2[index].getcornerC() << std::endl;
    delete ptr2;


    return 0;
}

