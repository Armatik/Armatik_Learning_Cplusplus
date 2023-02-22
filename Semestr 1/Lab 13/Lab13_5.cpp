////
//// Created by Sfomc on 21.12.2022.
////
//#include <iostream>
//#include <string>
//class mail{
//private:    // Создаём массив элементов типа string.
//    std::string *adress;
//public:
//    mail(){     // Конструктор по умолчанию заполняет все массивы нулями.
//        this->adress = new std::string[6];
//        for (int i=0; i<=5; i++){
//            adress[i] = "0";
//        }
//    }
//    mail(const std::string &index,const std::string &city, const std::string &street, const std::string &house,
//    const std::string &sub_house, const std::string &appartament){  // Конструктор, который получает
//        this->adress = new std::string[6];                          // данные адреса и записывает их
//        this->adress[0] = index;
//        this->adress[1] = city;
//        this->adress[2] = street;
//        this->adress[3] = house;
//        this->adress[4] = sub_house;
//        this->adress[5] = appartament;
//    }
//    void change_info(){     // Метод для замены информации в адресе через юзер френдли интерфейс
//        std::cout << "Введите номер информации которую хотите поменять(без пробелов): 1 - индекс, 2 - город, 3 - улица, 4 - дом, "
//        "5 - строение, 6 - квартира:" << "\n";
//        int num_of_data;
//        std::cin >> num_of_data;
//        std::cout << "Введите информацию которую хотите записать: " << "\n";
//        std::string data;
//        std::cin >> data;
//        this->adress[num_of_data - 1] = data;
//    }
//    void change_info(const int &num_of_data, const std::string &data){  // Метод для замены информации
//        this->adress[num_of_data - 1] = data;   // без использования юзер френдли интерфейса.
//    }
//    void get_mail_info() { // Получение всей информации об адресе
//        for (int i=0; i<=5; i++){
//            std::cout << this->adress[i].c_str() << ", ";
//        }
//        std::cout << "\n";
//    }
//    ~mail(){ // Деструктор для освобождения памяти.
//        delete[] adress;
//    }
//};
//
//int main() {
//    mail first("214000", "Смоленск", "3-я_Линия_Красноармейской_слободы", "6", "2", "12");
//    mail second("214000", "Смоленск", "3-я_Линия_Красноармейской_слободы", "6", "1", "17");
//    first.change_info(6, "17");
//    second.change_info();
//    first.get_mail_info();
//    second.get_mail_info();
//    return 0;
//}