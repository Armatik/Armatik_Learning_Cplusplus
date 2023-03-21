//класс динамической строки
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
    int get_lenght(){
        return strlen(pchar);
    }
    void clear_string(){
        delete[] pchar;
        lenght_B = 0;
    }
    char* get_pchar(){
        return pchar;
    }

    char* substring(int s, int l){
        char *temp = new char[l];
        for (int i = s, k = 0; k < l; i++, k++){
            temp[k] = pchar[i];
        }
        return temp;
    }

};

int main(){
    stroka str1("Hello, world!");
    std::cout << str1.get_pchar() << std::endl;
    std::cout << str1.substring(0, 5) << std::endl;
    std::cout << str1.substring(7, 5) << std::endl;
    return 0;
}