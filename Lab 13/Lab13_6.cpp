////
//// Created by Sfomc on 21.12.2022.
////
//#include <iostream>
//#include <string>
//class Goods{
//private:
//    std::string *info;
//public:
//    Goods(){
//        this->info = new std::string[6];
//        for (int i=0; i<=6; i++){
//            info[i] = "0";
//        }
//
//
//    }
//
//    Goods(const std::string &name,const std::string &input_date, const std::string &cost, const std::string &quantity,
//    const std::string &number){
//        this->info = new std::string[6];
//        this->info[0] = name;
//        this->info[1] = input_date;
//        this->info[2] = cost;
//        this->info[3] = quantity;
//        this->info[4] = number;
//    }
//    void change_info(){
//        std::cout << "Введите номер информации которую хотите поменять у "<< info[0] << " (без пробелов): " << "\n"
//        << "1 - название, 2 - дата оформления, 3 - стоимость, 4 - количество, "
//        "5 - номер накладной:" << "\n";
//        int num_of_data;
//        std::cin >> num_of_data;
//        std::cout << "Введите информацию которую хотите записать: " << "\n";
//        std::string data;
//        std::cin >> data;
//        this->info[num_of_data - 1] = data;
//    }
//    void change_info(const int &num_of_data, const std::string &data){
//        this->info[num_of_data - 1] = data;
//    }
//    void get_goods_info() {
//        for (int i=0; i<=5; i++){
//            std::cout << this->info[i].c_str() << ", ";
//        }
//        std::cout << "\n";
//    }
//    void add_goods(){
//        info[3] = std::to_string(std::stoi(info[3]) + 1);
//    }
//    void add_goods(const int &data){
//        info[3] = std::to_string(std::stoi(info[3]) + data);
//    }
//    void hitch_goods(){
//        info[3] = std::to_string(std::stoi(info[3]) - 1);
//    }
//    void hitch_goods(const int &data){
//        info[3] = std::to_string(std::stoi(info[3]) - data);
//    }
//    int get_all_cost(){
//        return std::stoi(info[3]) * std::stoi(info[2]);
//    }
//    void output_all_cost(){
//        std::cout << "Все " << info[3] << " " << info[0] << " стоит: " << this->get_all_cost() << "\n";
//    }
//
//    ~Goods(){
//        delete[] info;
//    }
//};
//
//int main() {
//    Goods first("Смартфон", "18.03.2004", "10000", "100", "1");
//    Goods second("Планшет", "28.03.2004", "15000", "50", "2");
//    first.add_goods(50);
//    first.hitch_goods(100);
//    second.add_goods(100);
//    second.hitch_goods();
//    first.output_all_cost();
//    second.get_goods_info();
//    second.change_info(3, "14000");
//    first.change_info();
//    second.output_all_cost();
//    first.get_goods_info();
//    first.output_all_cost();
//    return 0;
//}