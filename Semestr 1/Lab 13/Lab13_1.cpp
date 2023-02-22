////
//// Created by Sfomc on 21.12.2022.
////
//#include <iostream>
//class complex{
//private:
//    int *compl_number;      // Действительная часть комплексного числа
//    char *compl_letter;     // Мнимая часть комплексного числа
//public:
//    complex(){              // Конструктор по умолчанию задаёт число 2x
//        this->compl_number = new int;
//        *this->compl_number = 2;
//        this->compl_letter = new char;
//        *this->compl_letter = 'x';
//    }
//    complex(const int &incompl_number, const char &incompl_letter){     // Конструктор принимающий в себя число.
//        this->compl_number = new int;
//        *this->compl_number = incompl_number;
//        this->compl_letter = new char;
//        *this->compl_letter = incompl_letter;
//    }
//    ~complex(){     // Деструктор для освобождения памяти
//        delete this->compl_number;
//        delete this->compl_letter;
//    }
//    int get_number(){
//        return *this->compl_number;
//    }
//    char get_letter(){
//        return *this->compl_letter;
//    }
//    void set_number(const int &incompl_number){
//        *this->compl_number = incompl_number;
//    }
//    void set_letter(const char &incompl_letter){
//        *this->compl_number = incompl_letter;
//    }
//    char addition(const int &incompl_number, const char &incompl_letter){   // Метод сложения комплексных чисел
//        if (*this->compl_letter == incompl_letter){
//            *this->compl_number = *this->compl_number + incompl_number;
//        } else{
//            std::cout << "Ошибка. Мнимая часть чисел не соответствует. Сложение невозможно.";
//            return 0;
//        }
//    }
//    char subtraction(const int &incompl_number, const char &incompl_letter){    // Метод вычитания комплексных чисел
//        if (*this->compl_letter == incompl_letter){
//            *this->compl_number = *this->compl_number - incompl_number;
//
//        } else{
//            std::cout << "Ошибка. Мнимая часть чисел не соответствует. Вычитание невозможно.";
//            return 0;
//        }
//    }
//};
//
//int main(){
//    complex first(5, 'x');
//
//    int temp_int;
//    char temp_char;
//
//    std::cout << "Введите действительную и мнимую часть числа через пробел: ";  // Просим пользователя ввести второе мнимое число
//    std::cin >> temp_int >> temp_char;
//    std::cout << first.get_number() << first.get_letter() << " + " << temp_int << temp_char << " = ";
//    first.addition(temp_int, temp_char);
//    std::cout << first.get_number() << first.get_letter() << "\n";
//    std::cout << first.get_number() << first.get_letter() << " - " << temp_int << temp_char << " = ";
//    first.subtraction(temp_int, temp_char);
//    std::cout << first.get_number() << first.get_letter();
//}