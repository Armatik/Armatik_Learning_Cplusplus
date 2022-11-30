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
        *itsRadius = (inRadius + 5);
        return *itsRadius;
    };

    unsigned& operator ++ (){
        *itsRadius += 2;
        return *itsRadius;
    };

    ~SimpleCircle(){
        delete &itsRadius;
    };
};

и
int main(){
    unsigned a = 5;
    SimpleCircle first(a), second();

    return 0;
}