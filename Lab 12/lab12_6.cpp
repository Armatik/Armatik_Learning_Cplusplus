#include <iostream>
#include <exception>
#include <cstdarg>


template <typename T>
class Vector {
private:
    T *array;
    unsigned size = 0;
public:
    Vector() noexcept;

    explicit Vector(T elems, ...) noexcept;

    ~Vector() noexcept;

    [[nodiscard]] T at(const unsigned &elem) const;

    void push_back(const T &elem) noexcept;

    void pop(const T &elem);

    [[nodiscard]] unsigned get_size() const noexcept;
};


int main() {
    Vector<int> vector1(6, 2, 3, 4, 5, 6, 7);

    for (unsigned i = 0; i < vector1.get_size(); i++)
        std::cout << vector1.at(i) << ' ';

    std::cout << std::endl;

    vector1.pop(3);

    for (unsigned i = 0; i < vector1.get_size(); i++)
        std::cout << vector1.at(i) << ' ';

    std::cout << std::endl << "##########################################" << std::endl;

    Vector<char> vector2;

    for (unsigned i = 32; i < 58; i++)
        vector2.push_back((char)i);

    for (unsigned i = 0; i < vector2.get_size(); i++)
        std::cout << vector2.at(i) << ' ';

    std::cout << std::endl;
    std::cout << std::endl;

    vector2.pop(5);
    vector2.pop(13);
    vector2.pop(18);

    for (unsigned i = 0; i < vector2.get_size(); i++)
        std::cout << vector2.at(i) << ' ';

    return 0;
}


template <typename T>
Vector<T>::Vector() noexcept { array = nullptr; }


template <typename T>
Vector<T>::Vector(T elems, ...) noexcept {
    array = new T[elems];
    size = elems;

    va_list factor;
    va_start(factor, elems);

    for(int i = 0; i < elems; i++)
        array[i] = va_arg(factor, T);

    va_end(factor);
}


template <typename T>
Vector<T>::~Vector() noexcept { delete[] array; }


template <typename T>
T Vector<T>::at(const unsigned &elem) const {
    if (elem > size)
        throw std::range_error("Error! Element of string more than length of vector");

    return array[elem];
}


template <typename T>
void Vector<T>::push_back(const T &elem) noexcept {
    auto copyArray = new T[size];

    for (unsigned i = 0; i < size; i++)
        copyArray[i] = array[i];

    delete[] array;

    size++;

    array = new T[size];

    for (unsigned i = 0; i < size - 1; i++)
        array[i] = copyArray[i];

    array[size - 1] = elem;

    delete[] copyArray;
}


template <typename T>
void Vector<T>::pop(const T &elem) {
    if (elem > size)
        throw std::range_error("Error! Element of string more than length of vector");

    auto copyArray = new T[size];

    for (unsigned i = 0; i < size; i++)
        copyArray[i] = array[i];

    delete[] array;

    size--;

    array = new T[size];

    bool flag = false;

    for (unsigned i = 0; i < size + 1; i++)
        if (i != elem && !flag)
            array[i] = copyArray[i];
        else if (i != elem && flag)
            array[i - 1] = copyArray[i];
        else
            flag = true;

    delete[] copyArray;
}


template <typename T>
unsigned Vector<T>::get_size() const noexcept { return size; }
