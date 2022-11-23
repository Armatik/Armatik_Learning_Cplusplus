#include "iostream"
#include "cmath"

class Child{
private:
    unsigned age;
    std::string name, surename;
public:
//    explicit Child(const unsigned &age, const std::string &name, const std::string &surename){
//        this->age = age;
//        this->name = name;
//        this->surename = surename;
//    }


    void set_age(const unsigned &inAge){
        age = inAge;
    }

    [[nodiscard]] unsigned get_age() const {
        return age;
    }

    void set_name(const std::string &inname){
        name = inname;
    }

    [[nodiscard]] std::string get_name() const {
        return name;
    }

    void set_surename(const std::string &insurename){
        surename = insurename;
    }

    [[nodiscard]] std::string get_surename() const {
        return surename;
    }
};


int main() {
    Child first{}, second{};
    unsigned int age;
    std::string name, surename;
    std::cout << "Введите возраст, имя и фамилию первого ребёнка через пробел: ";
    std::cin >> age >> name >> surename;
    first.set_age(age);
    first.set_name(name);
    first.set_surename(surename);
    std::cout << std::endl << "Введите возраст, имя и фамилию второго ребёнка через пробел: ";
    std::cin >> age >> name >> surename;
    second.set_age(age);
    second.set_name(name);
    second.set_surename(surename);
    std::cout << std::endl << "Возраст: " << first.get_age() << " Имя: " << first.get_name() << " Фамилия: " << first.get_surename();
    std::cout << std::endl << "Возраст: " << second.get_age() << " Имя: " << second.get_name() << " Фамилия: " << second.get_surename();
    return 0;
}