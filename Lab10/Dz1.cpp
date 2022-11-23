#include <iostream>


class Tile{

private:
    std::string brand;
    unsigned    size_w;
    unsigned    size_h;
    unsigned    price;

public:
    explicit Tile (const std::string brand, const unsigned size_w, const unsigned size_h, const unsigned price){
        this->brand = brand;
        this->size_w = size_w;
        this->size_h = size_h;
        this->price = price;
    }

    void get_data(){
        std::cout<< "Бренд: " << brand << ". Ширина: " << size_w << ". Высота: " << size_h << ". Цена за 1 ед.: " << price << "." <<"\n";
    }
};


int main(){
    Tile monolit("Монолит", 10, 10, 1000),
    betonGarant("Бетон Гарант", 10, 20, 1500);
    monolit.get_data();
    betonGarant.get_data();
    return 0;
}