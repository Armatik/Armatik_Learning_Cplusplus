//#include <iostream>
//
//class Worker{
//private:
//    //Блок переменных///////////////////
//    std::string *name = new std::string;                     //Имя работника.
//    unsigned *year_of_work = new unsigned int;               //Стаж работы(в годах).
//    unsigned *hours_payment = new unsigned int;              //Почасовая оплата.
//    unsigned *work_hours = new unsigned int;                 //Количество отработанных часов.
//
//public:
//    //Блок Сеттеров////////////////////////
//    void set_name(const std::string &name){                 //Сеттер для имени работника.
//        *this->name = name;
//    }
//    void set_year_of_work(const unsigned &year_of_work){    //Сеттер для стажа работника.
//        *this->year_of_work = year_of_work;
//    }
//    void set_hours_payment(const unsigned &hours_payment){  //Сеттер для информации о почасовой оплате.
//        *this->hours_payment = hours_payment;
//    }
//    void set_work_hours(const unsigned &work_hours){        //Сеттер для количества отработанных часов.
//        *this->work_hours = work_hours;
//    }
//    //Блок Геттеров////////
//    std::string get_name(){                                 //Геттер для имени работника.
//        return *this->name;
//    }
//    unsigned get_year_of_work(){                            //Геттер для стажа работника.
//        return *this->year_of_work;
//    }
//    unsigned get_hours_payment(){                           //Геттер для информации о почасовой оплате.
//        return *this->hours_payment;
//    }
//    unsigned get_work_hours(){                              //Геттер для количества отработанных часов.
//        return *this->work_hours;
//    }
//    //Блок методов класса////////////////
//    unsigned hour_payment_with_indexer(){                   //Метод возврата почасовой зарплаты с учётом премиальных.
//        if (*year_of_work < 1){
//            return *hours_payment;
//        }
//        if (*year_of_work < 3){
//            return (*hours_payment * 1.05);
//        }
//        if (*year_of_work < 5){
//            return (*hours_payment * 1.08);
//        }
//        if (*year_of_work >= 5){
//            return (*hours_payment * 1.15);
//        }
//    }
//    unsigned monthly_payment(){                             //Метод возврата месячной зарплаты при графике
//        return (*hours_payment * 8 * 22);                   //5/2 и 8 часовом рабочем дне. Без премиальных.
//    }
//    unsigned monthly_payment_with_indexer(){                //Метод возврата месячной зарплаты при графике
//        return (hour_payment_with_indexer() * 8 * 22);      //5/2 и 8 часовом рабочем дне. + премиальные.
//    }
//};
//
//
//int main(){
//    Worker first, second;                                   //Инициализируем 2 объекта класса Worker
//    std::string temp_str;                                   //Служебная переменная типа string
//    unsigned temp_unsg;                                     //Служебная переменная типа unsigned
//    //Первый работник|Имя//////////////////////////
//    std::cout << "Введите имя первого работника: ";
//    std::cin >> temp_str;
//    first.set_name(temp_str);
//    //Стаж работы в годах//////////////////////////////////////////////////
//    std::cout <<"Введите стаж работы первого работника(в годах): ";
//    std::cin >> temp_unsg;
//    first.set_year_of_work(temp_unsg);
//    //Почасовая оплата/////////////////////////////////////////////////////////////
//    std::cout <<"Введите почасовую оплату первого работника(в долларах): ";
//    std::cin >> temp_unsg;
//    first.set_hours_payment(temp_unsg);
//    //Количество отработанных часов/////////////////////////////////////////////////
//    std::cout <<"Введите количество отработанных часов первого работника: ";
//    std::cin >> temp_unsg;
//    first.set_work_hours(temp_unsg);
//
//    //Второй работник|Имя//////////////////////////
//    std::cout << "Введите имя второго работника: ";
//    std::cin >> temp_str;
//    second.set_name(temp_str);
//    //Стаж работы в годах//////////////////////////////////////////////////
//    std::cout <<"Введите стаж работы второго работника(в годах): ";
//    std::cin >> temp_unsg;
//    second.set_year_of_work(temp_unsg);
//    //Почасовая оплата/////////////////////////////////////////////////////////////
//    std::cout <<"Введите почасовую оплату второго работника(в долларах): ";
//    std::cin >> temp_unsg;
//    second.set_hours_payment(temp_unsg);
//    //Количество отработанных часов/////////////////////////////////////////////////
//    std::cout <<"Введите количество отработанных часов второго работника: ";
//    std::cin >> temp_unsg;
//    second.set_work_hours(temp_unsg);
//
//    //Блок вывода информации о первом работнике
//    std::cout << "\n" << "Первый работник: "
//                << first.get_name();
//    std::cout << "\n" << "Стаж работы: "
//                << first.get_year_of_work();
//    std::cout << "\n" << "Количество отработанных часов: "
//                << first.get_work_hours();
//    std::cout << "\n" << "Зарплата за 1 час работы: "
//                << first.get_hours_payment();
//    std::cout << "\n" << "Зарплата за 1 час работы с премией за стаж: "
//                << first.hour_payment_with_indexer();
//    std::cout << "\n" << "Зарплата за 1 месяц работы (8 часовой рабочий день, график 5/2): "
//                << first.monthly_payment();
//    std::cout << "\n" << "Зарплата за 1 месяц работы с премией за стаж "
//                "(8 часовой рабочий день, график 5/2): "
//                << first.monthly_payment_with_indexer();
//    //Блок вывода информации о первом работнике
//    std::cout << "\n" "\n" << "Второй работник: "
//                << second.get_name();
//    std::cout << "\n" << "Стаж работы: "
//                << second.get_year_of_work();
//    std::cout << "\n" << "Количество отработанных часов: "
//                << second.get_work_hours();
//    std::cout << "\n" << "Зарплата за 1 час работы: "
//                << second.get_hours_payment();
//    std::cout << "\n" << "Зарплата за 1 час работы с премией за стаж: "
//                << second.hour_payment_with_indexer();
//    std::cout << "\n" << "Зарплата за 1 месяц работы (8 часовой рабочий день, график 5/2): "
//                << second.monthly_payment();
//    std::cout << "\n" << "Зарплата за 1 месяц работы с премией за стаж "
//                "(8 часовой рабочий день, график 5/2): "
//                << second.monthly_payment_with_indexer();
//    return 0;
//}
