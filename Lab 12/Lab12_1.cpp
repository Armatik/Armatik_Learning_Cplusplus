#include <iostream>
#include <string>


int main(){
    std::string *str = new std::string;
    std::string temp_str;
    getline(std::cin, *str);
    for (unsigned i = str->length(); i > 0; i--){
        temp_str = str[0][0];
        temp_str = str[0][i];
        if (str[0][i] == str[0][0]){
            std::cout << "Последнее слово содержит первую букву первого слова.";
            return 0;
        }
        if (i < ((str[0]).rfind(""))){
            std::cout << "Не содержит.";
            return 0;
        }


    }
    return 0;
}