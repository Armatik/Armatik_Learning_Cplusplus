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
//    SimpleCircle(const SimpleCircle &copyRadius){
//        this->itsRadius = new unsigned(*copyRadius.itsRadius);
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
//    SimpleCircle& operator = (const SimpleCircle &inRadius){
//        *itsRadius = *inRadius.itsRadius;
//        return *this;
//
//    }
//
//};
//
//
//int main(){
//    SimpleCircle first(5), second = first;
//    std::cout << ++second << --second;
//
//    return 0;
//}