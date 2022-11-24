#include <iostream>


class SimpleCircle{
private:
    unsigned *itsRadius;
public:
    SimpleCircle(unsigned &itsRadius){
        this->itsRadius = new unsigned;
        this->itsRadius = &itsRadius;
    }

    void set_itsRadius(unsigned &inRadius){
        *itsRadius = inRadius;
    }

    unsigned& operator = (unsigned &inRadius){
        return *itsRadius = (inRadius + 5);
    };

    unsigned& operator ++ (){
        return *itsRadius += 2;
    };

    ~SimpleCircle(){
        delete &itsRadius;
    };
};


int main(){
    unsigned a = 5;
    SimpleCircle first(a), second();

    return 0;
}