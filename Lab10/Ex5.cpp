//#include "iostream"
//#include "cmath"
//
//class Employee{
//private:
//    unsigned age, yearsOfService, salary;
//    int round_money(unsigned inMoney){
//        return int(round((double)inMoney/1000)*1000);
//    }
//public:
//    Employee()
//
//
//    void set_age(const unsigned &inAge){
//        age = inAge;
//    }
//    int get_age(){
//        return age;
//    }
//    void set_yearsOfService(const unsigned &inyearsOfService){
//        yearsOfService = inyearsOfService;
//    }
//    int get_yearsOfService(){
//        return yearsOfService;
//    }
//    void set_salary(const unsigned &insalary){
//        salary = insalary;
//    }
//    int get_salary(){
//        return round_money(salary);
//    }
//};
//
//
//int main() {
//    Employee Danya{}, Ilya{};
//    unsigned int age, year, salary;
//    std::cout << "Введите возраст, стаж работы и зарплату работника Даня через пробел: ";
//    std::cin >> age >> year >> salary;
//    Danya.set_age(age);
//    Danya.set_yearsOfService(year);
//    Danya.set_salary(salary);
//    std::cout << "Введите возраст, стаж работы и зарплату работника Ильи через пробел: ";
//    std::cin >> age >> year >> salary;
//    Ilya.set_age(age);
//    Ilya.set_yearsOfService(year);
//    Ilya.set_salary(salary);
//    std::cout << std::endl << "Даня. Возраст: " << Danya.get_age() << " Стаж: " << Danya.get_yearsOfService() << " Зарплата: " << Danya.get_salary();
//    std::cout << std::endl << "Илья. Возраст: " << Ilya.get_age() << " Стаж: " << Ilya.get_yearsOfService() << " Зарплата: " << Ilya.get_salary();
//    return 0;
//}