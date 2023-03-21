#include <iostream>


class String {
private:
    char     *str;
    unsigned size;
public:
    explicit String(const char *str) noexcept;

    ~String() noexcept;

    [[nodiscard]] char* sub_string(const unsigned &start, const unsigned &end) const;
};


int main() {
    String str("Hello");

    std::cout << str.sub_string(0, 3) << std::endl;

    return 0;
}


String::String(const char *str) noexcept {
    size = 0;

    while (str[size] != '\0')
        size++;

    size++;

    this->str = new char[size];

    for (unsigned i = 0; i < size; i++)
        this->str[i] = str[i];
}


String::~String() noexcept { delete[] str; }


char* String::sub_string(const unsigned &start, const unsigned &end) const {
    if (end > size)
        throw std::logic_error("Error! End of substring more than length of string");

    char *subStr = new char[end - start + 1];

    for (unsigned i = start; i < end; i++)
        subStr[i - start] = str[i];

    subStr[end - start] = '\0';

    return subStr;
}
