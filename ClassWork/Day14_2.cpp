////
//// Created by armatik on 12/22/22.
////
//#include <iostream>
//
//
//class horse{
//private:
//    std::string *name;
//    double *score;
//public:
//    horse(){
//        name = new std::string;
//        score = new double[5];
//        *name = "Бурка";
//        for (int i = 0; i<=4; i++){
//            score[i] = i+1;
//        }
//    }
//    horse(const char *name, double *score) {
//        this->name = new std::string;
//        this->score = new double[5];
//        *this->name = "Бурка";
//        for (int i = 0; i <= 4; i++) {
//            this->score[i] = score[i];
//        }
//    }
//    double get_middle_time(){
//        double middle_time = 0;
//        for (int i=0; i <= 4; i++){
//            middle_time += score[i];
//        }
//        middle_time = middle_time / 5;
//        return middle_time;
//    }
//    void get_info(){
//        std::cout << "Имя лошади: " << *name << " Лучшие забеги: ";
//        for (int i=0; i <= 4; i++){
//            std::cout << score[i] << " ";
//        }
//        std::cout << "\n";
//    }
//};
//
//
//int main(){
//    double *temp1 = new double [5]{55.36, 55.56, 55.78, 56.34, 56.76};
//    double *temp2 = new double [5]{53.34, 53.52, 53.72, 54.31, 54.78};
//    horse first("Мишутка", temp1), second("Мурка", temp2), third{};
//    first.get_info();
//    std::cout << first.get_middle_time() << "\n";
//    second.get_info();
//    std::cout << second.get_middle_time() << "\n";
//    third.get_info();
//    std::cout << third.get_middle_time() << "\n";
//    std::cout << "Средняя скорость конюшни: "
//    << (first.get_middle_time() + second.get_middle_time() + third.get_middle_time()) / 3 << "\n";
//    return 0;
//}