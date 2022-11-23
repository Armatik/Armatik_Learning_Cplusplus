//#include "iostream"
//#include "cmath"
//
//class Employee{
//private:
//    unsigned age, yearsOfService, salary;
//    static unsigned round_money(unsigned inMoney) noexcept {
//        return (unsigned)round((double)inMoney / 1000) * 1000;
//    }
//public:
//    explicit Employee(const unsigned &age, const unsigned &years, const unsigned &salary){
//        this->age = age;
//        this->yearsOfService = years;
//        this->salary = salary;
//    }
//
//    void set_age(const unsigned &inAge){
//        age = inAge;
//    }
//
//    [[nodiscard]] unsigned get_age() const {
//        return age;
//    }
//
//    void set_yearsOfService(const unsigned &inyearsOfService){
//        yearsOfService = inyearsOfService;
//    }
//
//    [[nodiscard]] unsigned get_yearsOfService() const {
//        return yearsOfService;
//    }
//
//    void set_surename(const unsigned &insalary){
//        salary = insalary;
//    }
//
//    [[nodiscard]] unsigned get_surename() const {
//        return round_money(salary);
//    }
//};
//
//
//int main() {
//    Employee Danya(18, 5, 1400), Ilya{};
//    unsigned int age, year, salary;
//    std::cout << "Введите возраст, стаж работы и зарплату работника Даня через пробел: ";
//    std::cin >> age >> year >> salary;
//    Danya.set_age(age);
//    Danya.set_yearsOfService(year);
//    Danya.set_surename(salary);
//    std::cout << "Введите возраст, стаж работы и зарплату работника Ильи через пробел: ";
//    std::cin >> age >> year >> salary;
//    Ilya.set_age(age);
//    Ilya.set_yearsOfService(year);
//    Ilya.set_surename(salary);
//    std::cout << std::endl << "Даня. Возраст: " << Danya.get_age() << " Стаж: " << Danya.get_yearsOfService() << " Зарплата: " << Danya.get_surename();
//    std::cout << std::endl << "Илья. Возраст: " << Ilya.get_age() << " Стаж: " << Ilya.get_yearsOfService() << " Зарплата: " << Ilya.get_surename();
//    return 0;
//}