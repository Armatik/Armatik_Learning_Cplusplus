////
//// Created by Sfomc on 21.12.2022.
////
//#include <iostream>
//class Ship{
//private:
//    unsigned *ship_id;
//    int *ship_cord_x;
//    int *ship_cord_y;
//public:
//    Ship(){
//        this->ship_id = new unsigned;
//        this->ship_cord_x = new int;
//        this->ship_cord_y = new int;
//        *this->ship_id = 0;
//        *this->ship_cord_x = 0;
//        *this->ship_cord_y = 0;
//    }
//
//    Ship(const unsigned &ship_id, const int &ship_cord_x, const int ship_cord_y){
//        this->ship_id = new unsigned;
//        this->ship_cord_x = new int;
//        this->ship_cord_y = new int;
//        *this->ship_id = ship_id;
//        *this->ship_cord_x = ship_cord_x;
//        *this->ship_cord_y = ship_cord_y;
//    }
//    void get_ship_info(){
//        std::cout << "ID судна: " << *this->ship_id << " Координаты судна по x | y: " << *this->ship_cord_x << " | "
//        << *this->ship_cord_y << "\n";
//    }
//};
//
//int main() {
//    Ship first(222, 150, -30), second(135, 10, 30), third(1, 1000, 342);
//    first.get_ship_info();
//    second.get_ship_info();
//    third.get_ship_info();
//    return 0;
//}