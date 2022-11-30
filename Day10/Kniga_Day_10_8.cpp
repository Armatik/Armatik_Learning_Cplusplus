#include <iostream>


class SimpleCircle{
private:
    unsigned *itsRadius;
public:
    SimpleCircle(){
        itsRadius = new unsigned;
        *itsRadius = 5;
    }
    SimpleCircle(unsigned itsRadius){
        this->itsRadius = new unsigned(itsRadius);
    }

    SimpleCircle(const SimpleCircle &copyRadius){
        this->itsRadius = new unsigned(*copyRadius.itsRadius);
    }

    void set_itsRadius(unsigned &inRadius){
        *this->itsRadius = inRadius;
    }

    unsigned get_itsRadius(){
        return *itsRadius;
    }

    ~SimpleCircle(){
        delete itsRadius;
    }

    unsigned operator ++ (){
        return *itsRadius += 2;
    };

    unsigned operator -- (){
        return *itsRadius -= 2;
    };

    SimpleCircle& operator = (const SimpleCircle &inRadius){
        *itsRadius = *inRadius.itsRadius;
        return *this;

    }

};


int main(){
    SimpleCircle first, second(9);
    std::cout << ++second << " "  << --second << " " << ++first << " "  << --first << "\n";
    second = first;
    std::cout << second.get_itsRadius();

    return 0;
}