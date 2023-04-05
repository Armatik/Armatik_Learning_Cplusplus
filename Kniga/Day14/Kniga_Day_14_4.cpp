#include <iostream>


class ObjectCounter {
private:
    static unsigned counter;
    int             data;
public:
    explicit ObjectCounter(const int &data) noexcept;

    ~ObjectCounter() noexcept;

    static unsigned get_counter() noexcept;

    [[nodiscard]] int get_data() const noexcept;
};


unsigned ObjectCounter::counter = 0;



int (ObjectCounter::*ptrFunction)() const noexcept = &ObjectCounter::get_data;


int main() {
    auto object1 = new ObjectCounter(1), object2 = new ObjectCounter(2), object3 =
            new ObjectCounter(3);

    std::cout << "Data: " << (object1->*ptrFunction)() << "\nCounter: " << ObjectCounter::get_counter() << std::endl;

    delete object1;

    std::cout << "Data: " << (object2->*ptrFunction)() << "\nCounter: " << ObjectCounter::get_counter() << std::endl;

    delete object2;

    std::cout << "Data: " << (object3->*ptrFunction)() << "\nCounter: " << ObjectCounter::get_counter() << std::endl;

    delete object3;

    return 0;
}


ObjectCounter::ObjectCounter(const int &data) noexcept {counter++, this->data = data; }


ObjectCounter::~ObjectCounter() noexcept { counter--; }


unsigned ObjectCounter::get_counter() noexcept { return counter; }


int ObjectCounter::get_data() const noexcept { return data; }
