////
//// Created by Sfomc on 21.12.2022.
////
//#include <iostream>
//#include <string>
//class mail{
//private:
//    std::string *adress;
//public:
//    mail(){
//        this->adress = new std::string[6];
//        for (int i=0; i<=5; i++){
//            adress[i] = "0";
//        }
//
//
//    }
//
//    mail(const std::string &index,const std::string &city, const std::string &street, const std::string &house,
//    const std::string &sub_house, const std::string &appartament){
//        this->adress = new std::string[6];
//        this->adress[0] = index;
//        this->adress[1] = city;
//        this->adress[2] = street;
//        this->adress[3] = house;
//        this->adress[4] = sub_house;
//        this->adress[5] = appartament;
//    }
//    void change_info(){
//        std::cout << "Введите номер информации которую хотите поменять(без пробелов): 1 - индекс, 2 - город, 3 - улица, 4 - дом, "
//        "5 - строение, 6 - квартира:" << "\n";
//        int num_of_data;
//        std::cin >> num_of_data;
//        std::cout << "Введите информацию которую хотите записать: " << "\n";
//        std::string data;
//        std::cin >> data;
//        this->adress[num_of_data - 1] = data;
//    }
//    void change_info(const int &num_of_data, const std::string &data){
//        this->adress[num_of_data - 1] = data;
//    }
//    void get_mail_info() {
//        for (int i=0; i<=5; i++){
//            std::cout << this->adress[i].c_str() << ", ";
//        }
//        std::cout << "\n";
//    }
//    ~mail(){
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