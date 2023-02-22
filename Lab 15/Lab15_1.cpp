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

    void getlength() const{
        std::cout << "a = " << a << " b = " << b << " c = " << c << std::endl;
    }
    double getcornerA() const{
        return acos((b*b+c*c-a*a)/(2*b*c))*180/3.14;
    }
    double getgornerB() const{
        return acos((a*a+c*c-b*b)/(2*a*c))*180/3.14;
    }
    double getcornerC() const{
        return acos((a*a+b*b-c*c)/(2*a*b))*180/3.14;
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
    //русский язык консоли для windows
    system("chcp 65001");
    triangle *ptr1[10];
    for (int i = 0; i < 10; i++){
        ptr1[i] = new triangle(rand()%100+1,rand()%100+1,rand()%100+1);
        while(!ptr1[i]->isTriangle()){
            ptr1[i] = new triangle(rand()%100+1,rand()%100+1,rand()%100+1);
        }
    }
    std::cout << "Вывод информации о трегуольниках" << std::endl;
    for(int i = 0; i<10; i++){
        ptr1[i]->getlength();
        std::cout << "Индекс треугольника" << i+1 << std::endl;
        std::cout << "Периметр = " << ptr1[i]->getPerimeter() << std::endl;
        std::cout << "Площадь = " << ptr1[i]->getArea() << std::endl;
        std::cout << "Угол A = " << ptr1[i]->getcornerA() <<" градусов" << std::endl;
        std::cout << "Угол B = " << ptr1[i]->getgornerB() <<" градусов" << std::endl;
        std::cout << "Угол C = " << ptr1[i]->getcornerC() <<" градусов" << std::endl;
        std::cout << "=============================" << std::endl;
    }
    //вывод средней площади треугольников в массиве ptr1
    double aper = 0;
    for(int i = 0; i < 10; i++){
        aper += ptr1[i]->getArea();
    }
    std::cout << "Средняя площадь треугольников = " << aper/10 << std::endl;
    std::cout << "=============================" << std::endl;
    for(int i = 0; i < 10; i++){
        delete ptr1[i];
    }
    iscelleneous *ptr2[10];
    for (int i = 0; i < 10; i++){
        ptr2[i] = new iscelleneous(rand()%100+1,rand()%100+1,rand()%100+1);
        while(!ptr2[i]->isTriangle() and !ptr2[i]->isIsosceles()){
            ptr2[i] = new iscelleneous(rand()%100+1,rand()%100+1,rand()%100+1);
        }
    }
    std::cout << "Вывод информации о прямоугольных трегуольниках" << std::endl;
    for(int i = 0; i<10; i++){
        ptr2[i]->getlength();
        std::cout << "Индекс треугольника" << i+1 << std::endl;
        std::cout << "Периметр = " << ptr2[i]->getPerimeter() <<" градусов" << std::endl;
        std::cout << "Площадь = " << ptr2[i]->getArea() << std::endl;
        std::cout << "Угол A = " << ptr2[i]->getcornerA() <<" градусов" << std::endl;
        std::cout << "Угол B = " << ptr2[i]->getgornerB() <<" градусов" << std::endl;
        std::cout << "Угол C = " << ptr2[i]->getcornerC() <<" градусов" << std::endl;

        std::cout << "=============================" << std::endl;
    }
    //вывод данных о треугольнике с минимальной площадью в массиве ptr2
    double min = 1000000;
    int index = 0;
    for(int i = 0; i < 10; i++){
        if(ptr2[i]->getArea() < min and ptr2[i]->isIsosceles()){
            min = ptr2[i]->getArea();
            index = i;
        }
    }
    std::cout << "Индекс прямоугольного треугольника с минимальной площадью = " << index + 1 << std::endl;
    ptr2[index]->getlength();
    std::cout << "Периметр = " << ptr2[index]->getPerimeter() << std::endl;
    std::cout << "Площадь = " << ptr2[index]->getArea() << std::endl;
    std::cout << "Угол A = " << ptr2[index]->getcornerA() <<" градусов" << std::endl;
    std::cout << "Угол B = " << ptr2[index]->getgornerB() <<" градусов" << std::endl;
    std::cout << "Угол C = " << ptr2[index]->getcornerC() <<" градусов" << std::endl;
    std::cout << "=============================" << std::endl;

    for(int i = 0; i < 10; i++){
        delete ptr2[i];
    }


    return 0;
}

