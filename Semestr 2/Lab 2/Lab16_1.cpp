#include <iostream>
#include <cstring>


class stroka{
protected:
    char *pchar;
    int lenght_B;
public:
    stroka(){
        lenght_B = 0;
        pchar = new char[lenght_B];
    }
    stroka(char *pchar){
        lenght_B = strlen(pchar);
        this->pchar = new char[lenght_B];
        strcpy(this->pchar, pchar);
    }
    ~stroka(){
        delete[] pchar;
    }
    int get_lenght_of_string(char *pchar){
        return strlen(pchar);
    }
    int get_lenght(){
        return strlen(pchar);
    }
    void clear_string(){
        delete[] pchar;
        lenght_B = 0;
    }
    void operator + (const stroka& tchar){
        lenght_B += tchar.lenght_B;
        char *temp = new char[lenght_B];
        strcpy(temp, pchar);
        strcat(temp, tchar.pchar);
        delete[] pchar;
        pchar = temp;
    }
    char* get_pchar(){
        return pchar;
    }
};


class complex_number: public stroka{
    protected:
    int lenf = 0;
    int lens = 0;
    public:
    complex_number(){
        lenght_B = 1;
        pchar = new char[lenght_B];
        pchar[0] = '0';
    }
    complex_number(char *fchar){
        lenf = get_lenght_of_string(fchar);
        lenght_B = lenf;
        pchar = new char[lenght_B];
        strcpy(pchar, fchar);
    }
    complex_number(char *fchar, char *schar){
        lenf = get_lenght_of_string(fchar);
        lens = get_lenght_of_string(schar);
        lenght_B = lenf + lens + 1;
        pchar = new char[lenght_B];
        strcpy(pchar, fchar);
        strcat(pchar, "i");
        strcat(pchar, schar);


    }
    bool operator == (const complex_number& tchar) const{
        if(lenght_B == tchar.lenght_B){
            for(int i = 0; i < lenght_B; i++){
                if(pchar[i] != tchar.pchar[i]){
                    return false;
                }
            }
            return true;
        }
        else{
            return false;
        }
    }
};



int main(){
    complex_number a("1", "2");
    complex_number b("1", "2");
    if(a == b){
        std::cout << "a == b" << std::endl;
    }
    else{
        std::cout << "a != b" << std::endl;
    }
    complex_number c("1", "3");
    if(a == c){
        std::cout << "a == c" << std::endl;
    }
    else{
        std::cout << "a != c" << std::endl;
    }
    stroka fhi("hello ");
    stroka shi("world!");
    fhi + shi;
    std::cout << fhi.get_pchar() << std::endl;
    std::cout << shi.get_pchar() << std::endl;
    std::cout << fhi.get_lenght() << std::endl;


    return 0;
}