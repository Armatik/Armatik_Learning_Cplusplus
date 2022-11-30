//#include <iostream>
//
//
//class SimpleCircle{
//private:
//    unsigned itsRadius;
//public:
//    SimpleCircle(){
//        this->itsRadius = 5;
//    }
//    SimpleCircle(unsigned itsRadius){
//        this->itsRadius = itsRadius;
//    }
//
//    void set_itsRadius(unsigned &inRadius){
//        this->itsRadius = inRadius;
//    }
//
//    ~SimpleCircle() = default;
//
//    unsigned operator ++ (){
//        return itsRadius += 2;
//    };
//
//    unsigned operator -- (){
//        return itsRadius -= 2;
//    };
//
//};
//
//
//int main(){
//    SimpleCircle first(5);
//    return 0;
//}