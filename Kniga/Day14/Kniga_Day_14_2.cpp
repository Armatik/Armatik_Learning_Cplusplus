#include <iostream>
template <typename T>
class ObjectCounter {
private:
    static unsigned counter;
    T               data;
public:
    explicit ObjectCounter(const T &data) noexcept;
    ~ObjectCounter() noexcept;
    static unsigned get_counter() noexcept;
    [[nodiscard]] T get_data() const noexcept;
};


template <typename T>
unsigned ObjectCounter<T>::counter = 0;


int main() {
    auto object1 = new ObjectCounter<int>(1), object2 = new ObjectCounter<int>(2), object3 =
            new ObjectCounter<int>(3);

    std::cout << "Data: " << object1->get_data() << "\nCounter: " << ObjectCounter<int>::get_counter() << std::endl;

    delete object1;

    std::cout << "Data: " << object2->get_data() << "\nCounter: " << ObjectCounter<int>::get_counter() << std::endl;

    delete object2;

    std::cout << "Data: " << object3->get_data() << "\nCounter: " << ObjectCounter<int>::get_counter() << std::endl;

    delete object3;

    return 0;
}


template <typename T>
ObjectCounter<T>::ObjectCounter(const T &data) noexcept {counter++, this->data = data; }


template <typename T>
ObjectCounter<T>::~ObjectCounter() noexcept { counter--; }


template <typename T>
unsigned ObjectCounter<T>::get_counter() noexcept { return counter; }


template <typename T>
T ObjectCounter<T>::get_data() const noexcept { return data; }
