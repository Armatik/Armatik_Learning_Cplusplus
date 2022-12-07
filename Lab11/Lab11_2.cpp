//#include <iostream>
//
//class ZooShop{
//private:
//    std::string *type_of_animal;    //Тип животного.
//    bool *animal_gender;            //Пол животного.
//    std::string *name;              //Имя животного.
//    unsigned *cost;                 //Стоимость животного.
//    unsigned *amount;               //Количество животных.
//public:
//    ZooShop(){
//        this->type_of_animal = new std::string;
//        *this->type_of_animal = "Empty";
//        this->animal_gender = new bool;
//        *this->animal_gender = false;
//        this->name = new std::string;
//        *this->name = "Empty";
//        this->cost = new unsigned;
//        *this->cost = 0;
//        this->amount = new unsigned;
//        *this->amount = 0;
//    }
//    ZooShop(std::string type_of_animal, bool animal_gender, std::string name, unsigned cost, unsigned amount){
//        this->type_of_animal = new std::string(type_of_animal);
//        this->animal_gender = new bool(animal_gender);
//        this->name = new std::string(name);
//        this->cost = new unsigned(cost);
//        this->amount = new unsigned(amount);
//    }
//    ~ZooShop(){
//        delete this->type_of_animal;
//        delete this->animal_gender;
//        delete this->name;
//        delete this->cost;
//        delete this->amount;
//    }
//    void set_type_of_animal(const std::string &type_of_animal){
//        *this->type_of_animal = type_of_animal;
//    }
//    void set_animal_gender(const std::string &animal_gender){
//        if ((animal_gender == "Мужской") or (animal_gender == "мужской")){
//            *this->animal_gender = 1;
//        }
//        else{
//            *this->animal_gender = 0;
//        }
//    }
//    void set_name(const std::string &name){
//        *this->name = name;
//    }
//    void set_cost(const unsigned &cost){
//        *this->cost = cost;
//    }
//    void set_amount(const unsigned &amount){
//        *this->amount = amount;
//    }
//
//
//    std::string get_type_of_animal(){
//        return *this->type_of_animal;
//    }
//    bool get_animal_gender(){
//        if (*this->animal_gender == 0){
//            return "Женский";
//        }
//        return "Мужской";
//    }
//    std::string get_name(){
//        return *this->name;
//    }
//    unsigned get_cost(){
//        return *this->cost;
//    }
//    unsigned get_amount(){
//        return *this->amount;
//    }
//};
//
//
//int main(){
//    ZooShop first("Собака", 0, "Мухтар", 1000, 1), second{};
//};