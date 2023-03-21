#include <iostream>
#include <cstdarg>


template <typename T>
class Vector {
private:
    T *vector;
    unsigned vecSize;
public:
    Vector() noexcept;

    explicit Vector(unsigned size, ...) noexcept;

    ~Vector() noexcept;

    T operator[](const unsigned &elem) const;

    void push_back(const T &elem) noexcept;

    [[nodiscard]] unsigned size() const noexcept;
};


int main() {
    Vector<int> null, full(5, -1, 0, 2, 3, 4);

    for (unsigned i = 0; i < 5; i++)
        null.push_back(-5);

    for (unsigned i = 0; i < null.size(); i++)
        std::cout << null[i] << std::endl;

    return 0;
}


template <typename T>
Vector<T>::Vector() noexcept { vector = nullptr, vecSize = 0; }


template <typename T>
Vector<T>::Vector(unsigned size, ...) noexcept {
    vecSize = size;
    vector = new T[vecSize];

    va_list args;
    va_start(args, size);

    for (unsigned i = 0; i < vecSize; i++)
        vector[i] = va_arg(args, T);

    va_end(args);


}


template <typename T>
Vector<T>::~Vector() noexcept { delete[] vector; }


template <typename T>
T Vector<T>::operator[](const unsigned &elem) const {
    if (elem >= vecSize)
        throw std::logic_error("Elem > then vecSize of vector");

    return vector[elem];
}


template <typename T>
unsigned Vector<T>::size() const noexcept { return vecSize; }


template <typename T>
void Vector<T>::push_back(const T &elem) noexcept {
    T *copyVector = new T[vecSize];

    for (unsigned i = 0; i < vecSize; i++)
        copyVector[i] = vector[i];

    delete[] vector;

    vector = new T[++vecSize];

    for (unsigned i = 0; i < vecSize - 1; i++)
        vector[i] = copyVector[i];

    vector[vecSize - 1] = elem;
}