////
//// Created by Sfomc on 21.12.2022.
////
//#include <iostream>
//class bill{
//private:
//    std::string *number;        // Номер телефона
//    unsigned *cost_per_min;     // Стоимость 1 минуты разговора
//    unsigned *sale;             // Скидка
//    unsigned *speak_time;       // Время разговора
//    double *final_cost;         // Финальная стоимость
//public:
//    bill(){                     // Конструктор по умолчанию
//        this->number = new std::string;
//        this->cost_per_min = new unsigned;
//        this->sale = new unsigned;
//        this->speak_time = new unsigned;
//        this->final_cost = new double;
//        *this->number = "+7-999-111-11-11";
//        *this->cost_per_min = 0;
//        *this->sale = 0;
//        *this->speak_time = 0;
//        *this->final_cost = 0;
//    }
//
//    bill(const std::string &number, const unsigned &cost_per_min, const unsigned &sale, const unsigned &speak_time){ // Конструктор с принимаемыми параметрами.
//        this->number = new std::string;
//        this->cost_per_min = new unsigned;
//        this->sale = new unsigned;
//        this->speak_time = new unsigned;
//        this->final_cost = new double;
//        *this->number = number;
//        *this->cost_per_min = cost_per_min;
//        *this->sale = sale;
//        *this->speak_time = speak_time;
//        *this->final_cost = 0;
//    }
//
//    ~bill(){    // Деструктор по умолчанию.
//        delete number;
//        delete cost_per_min;
//        delete sale;
//        delete speak_time;
//        delete final_cost;
//    }
//    void get_final_cost() { // Расчёт финального счёта на оплату
//        *final_cost = ((*this->speak_time * *this->cost_per_min)/100 * (100-*this->sale));
//    }
//    void get_number_info(){     // Вывод информации о номере
//        get_final_cost();
//        std::cout << "Номер: " << *this->number << "\n"
//        << "=========================" << "\n"
//        << "Тариф: " << "\n"
//        << "Стоиость 1 минуты разговора: "
//        << *this->cost_per_min << " ₽"<< "\n"
//        << "Персональная скидка: "
//        << *this->sale << " %" << "\n"
//        << "=========================" << "\n"
//        << "Минут потрачено: "
//        << *this->speak_time << "\n"
//        << "=========================" << "\n"
//        << "Итого к оплате: "
//        << *this->final_cost << " ₽" << "\n" << "\n";
//    }
//};
//
//int main() {
//    bill first("+7-991-123-45-67", 10, 23, 1343), second("+7-123-123-45-67", 3, 3, 1894);
//    first.get_number_info();
//    second.get_number_info();
//    return 0;
//}