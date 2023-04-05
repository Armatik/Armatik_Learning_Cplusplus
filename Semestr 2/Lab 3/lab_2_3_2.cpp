//
// Created by Sfomc on 29.03.2023.
//

#include <iostream>
#include <string>

class point{
    private:
        double x;
        double y;
    public:
        point() = default;

        point(double x, double y){
            this->x = x;
            this->y = y;
        }
        double getX(){
            return x;
        }
        double getY(){
            return y;
        }
        void setX(double x){
            this->x = x;
        }
        void setY(double y){
            this->y = y;
        }
        void print(){
            std::cout << "x: " << x << " y: " << y << std::endl;
        }
};

class line{
    private:
        point *a;
        point *b;
    public:
        line() = default;
        line(point *a, point *b){
            this->a = a;
            this->b = b;
        }
        point *getA(){
            return a;
        }
        point *getB(){
            return b;
        }
        void setA(point *a){
            this->a = a;
        }
        void setB(point *b){
            this->b = b;
        }
        void print(){
            std::cout << "A: " << a->getX() << " " << a->getY() << " B: " << b->getX() << " " << b->getY() << std::endl;
        }
};

class polygon{
    private:
        line *lines;
        int size;
    public:
        polygon() = default;
        polygon(line *lines, int size){
            this->lines = lines;
            this->size = size;
        }
        line *getLines(){
            return lines;
        }
        int getSize(){
            return size;
        }
        void setLines(line *lines){
            this->lines = lines;
        }
        void setSize(int size){
            this->size = size;
        }
        void print(){
            for(int i = 0; i < size; i++){
                lines[i].print();
            }
        }
};

class trinagle{
    private:
        polygon *polygon;
    public:
        trinagle(class polygon *polygon){
            this->polygon = polygon;
        }
        class polygon *getPolygon(){
            return polygon;
        }
        void setPolygon(class polygon *polygon){
            this->polygon = polygon;
        }
        void print(){
            polygon->print();
        }
};

class trapizon{
    private:
        polygon *polygon;
    public:
        trapizon(class polygon *polygon){
            this->polygon = polygon;
        }
        class polygon *getPolygon(){
            return polygon;
        }
        void setPolygon(class polygon *polygon){
            this->polygon = polygon;
        }
        void print(){
            polygon->print();
        }
};

class square{
    private:
        polygon *polygon;
    public:
        square(class polygon *polygon){
            this->polygon = polygon;
        }
        class polygon *getPolygon(){
            return polygon;
        }
        void setPolygon(class polygon *polygon){
            this->polygon = polygon;
        }
        void print(){
            polygon->print();
        }
};


int main(){
    //создание массива объектов класса point через for
    point *points = new point[4];
    for(int i = 0; i < 4; i++){
        points[i] = point(i, i);
    }
    //создание массива объектов класса line через for
    line *lines = new line[4];
    for(int i = 0; i < 4; i++){
        lines[i] = line(&points[i], &points[i+1]);
    }
    //создание объекта класса polygon
    polygon polygon(lines, 4);
    //создание объекта класса trinagle
    trinagle trinagle(&polygon);
    //создание объекта класса trapizon
    trapizon trapizon(&polygon);
    //создание объекта класса square
    square square(&polygon);
    //вывод всех объектов
    std::cout << "Trinagle Points: " << std::endl;
    trinagle.print();
    std::cout << "Trapizon Points: " << std::endl;
    trapizon.print();
    std::cout << "Square Points: " << std::endl;
    square.print();
    return 0;

}