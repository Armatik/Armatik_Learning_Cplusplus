//класс динамической строки
#include <iostream>
#include <cstring>
#include <algorithm>

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
    void replacechar(char *a, char *b){
        std::string temp(pchar);
        std::replace(temp.begin(), temp.end(), *a, *b);
        char *tempchar = new char[temp.length()];
        strcpy(tempchar, temp.c_str());
        pchar = tempchar;
    }

};

int main(){
    stroka str1("H, w");
    str1.replacechar("H", "W");
    std::cout << str1.get_pchar() << std::endl;
    str1.replacechar("W", "C");
    std::cout << str1.get_pchar() << std::endl;

    return 0;
}