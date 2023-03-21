#include <iostream>
#include <string>


class car{
private:
    unsigned *manufacture_year = new unsigned;
    std::string *brand = new std::string;
    std::string *model = new std::string;
public:
    car(){
        this->manufacture_year = new unsigned(0);
        this->brand = new std::string("");
        this->model = new std::string("");
    }

    car(const unsigned &manufacture_year, const std::string &brand, const std::string &model) noexcept{
        this->manufacture_year = new unsigned(manufacture_year);
        this->brand = new std::string(brand);
        this->model = new std::string(model);
    }

    car(const car &other) noexcept{
        this->manufacture_year = new unsigned(*other.manufacture_year);
        this->brand = new std::string(*other.brand);
        this->model = new std::string(*other.model);
    }

    ~car() noexcept{
        delete this->manufacture_year;
        delete this->brand;
        delete this->model;
    }

    unsigned get_manufacture_year() const noexcept{
        return *this->manufacture_year;
    }

    std::string get_brand() const noexcept{
        return *this->brand;
    }

    std::string get_model() const noexcept{
        return *this->model;
    }

    void set_manufacture_year(const unsigned &manifactire_year) noexcept{
        *this->manufacture_year = manufacture_year;
    }

    void set_brand(const std::string &brand) noexcept{
        *this->brand = brand;
    }

    void set_model(const std::string &model) noexcept{
        *this->model = model;
    }

    void car_discription() const noexcept{
        std::cout << "Manufacture year: " << *this->manufacture_year << std::endl;
        std::cout << "Brand: " << *this->brand << std::endl;
        std::cout << "Model: " << *this->model << std::endl;
    }
};