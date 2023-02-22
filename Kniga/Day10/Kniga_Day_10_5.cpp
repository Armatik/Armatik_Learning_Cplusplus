//#include <iostream>
//
//
//class SimpleCircle{
//private:
//    unsigned *itsRadius;
//public:
//    SimpleCircle(){
//        itsRadius = new unsigned;
//        *itsRadius = 5;
//    }
//    SimpleCircle(unsigned itsRadius){
//        this->itsRadius = new unsigned(itsRadius);
//    }
//
//    void set_itsRadius(unsigned &inRadius){
//        *this->itsRadius = inRadius;
//    }
//
//    ~SimpleCircle(){
//        delete itsRadius;
//    }
//
//    unsigned operator ++ (){
//        return *itsRadius += 2;
//    };
//
//    unsigned operator -- (){
//        return *itsRadius -= 2;
//    };
//
//};
//
//
//int main(){
//    SimpleCircle first(5);
//    return 0;
//}