//#include <iostream>
//
//
//class SimpleCircle{
//private:
//    unsigned *itsRadius;
//public:
//    SimpleCircle(unsigned $itsRadius){
//        this->itsRadius = itsRadius;
//        this->itsRadius = new unsigned;
//    }
//
//    SimpleCircle(const SimpleCircle &object)
//    {
//        std::cout << "Конструктор копирования";
//    }
//
//    void set_itsRadius(unsigned &inRadius){
//        *itsRadius = inRadius;
//    }
//
//    ~SimpleCircle(){
//        delete &itsRadius;
//    };
//};
//
//
//int main(){
//    SimpleCircle first(5);
//    return 0;
//}