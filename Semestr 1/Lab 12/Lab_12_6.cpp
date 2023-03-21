//#include <iostream>
//#include <exception>
//
//
//class Vector {
//private:
//    int *array;
//    unsigned vecSize = 0;
//public:
//    Vector() noexcept;
//
//    ~Vector() noexcept;
//
//    [[nodiscard]] int at(const unsigned &elem) const;
//
//    void push_back(const int &elem) noexcept;
//
//    void pop(const int &elem);
//
//    [[nodiscard]] unsigned get_size() const noexcept;
//};
//
//
//int main() {
//    std::cout << std::endl << "##########################################" << std::endl;
//
//    Vector vector2;
//
//    for (unsigned i = 32; i < 58; i++)
//        vector2.push_back((char)i);
//
//    for (unsigned i = 0; i < vector2.get_size(); i++)
//        std::cout << vector2.at(i) << ' ';
//
//    std::cout << std::endl;
//    std::cout << std::endl;
//
//    vector2.pop(5);
//    vector2.pop(13);
//    vector2.pop(18);
//
//    for (unsigned i = 0; i < vector2.get_size(); i++)
//        std::cout << vector2.at(i) << ' ';
//
//    return 0;
//}
//
//
//Vector::Vector() noexcept { array = nullptr; }
//
//
//Vector::~Vector() noexcept { delete[] array; }
//
//
//int Vector::at(const unsigned &elem) const {
//    if (elem > vecSize)
//        throw std::range_error("Error! Element of vector more than length of vector");
//
//    return array[elem];
//}
//
//
//void Vector::push_back(const int &elem) noexcept {
//    auto copyArray = new int[vecSize];
//
//    for (unsigned i = 0; i < vecSize; i++)
//        copyArray[i] = array[i];
//
//    delete[] array;
//
//    vecSize++;
//
//    array = new int[vecSize];
//
//    for (unsigned i = 0; i < vecSize - 1; i++)
//        array[i] = copyArray[i];
//
//    array[vecSize - 1] = elem;
//
//    delete[] copyArray;
//}
//
//
//void Vector::pop(const int &elem) {
//    if (elem > vecSize)
//        throw std::range_error("Error! Element of vector more than length of vector");
//
//    auto copyArray = new int[vecSize];
//
//    for (unsigned i = 0; i < vecSize; i++)
//        copyArray[i] = array[i];
//
//    delete[] array;
//
//    vecSize--;
//
//    array = new int[vecSize];
//
//    bool flag = false;
//
//    for (unsigned i = 0; i < vecSize + 1; i++)
//        if (i != elem && !flag)
//            array[i] = copyArray[i];
//        else if (i != elem && flag)
//            array[i - 1] = copyArray[i];
//        else
//            flag = true;
//
//    delete[] copyArray;
//}
//
//
//unsigned Vector::get_size() const noexcept { return vecSize; }
