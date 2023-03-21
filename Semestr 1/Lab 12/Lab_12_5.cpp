//#include <iostream>
//#include <exception>
//
//
//#if __unix__
//constexpr const char *CLEAR = "clear";
//#else
//constexpr const char *CLEAR = "cls";
//#endif
//
//
//class String {
//private:
//    char *str;
//    char *array;
//    unsigned strSize = 0;
//public:
//    String() noexcept;
//
//    explicit String(const char *str) noexcept;
//
//    explicit String(const char &symbol) noexcept;
//
//    ~String() noexcept;
//
//    String& operator=(const char *userStr) noexcept;
//
//    char operator[](const unsigned &elem) const;
//
//    char* operator+(const char &elem) noexcept;
//
//    char* operator+(const char *elem) noexcept;
//
//    char* operator+(const String &object) noexcept;
//
//    String& operator+=(const char &elem) noexcept;
//
//    String& operator+=(const char *elem) noexcept;
//
//    String& operator+=(const String &object) noexcept;
//
//    [[nodiscard]] char* data() const noexcept;
//};
//
//
//int main() {
//    while (true) {
//        int userData;
//        std::cout << "#############################################################################" << std::endl;
//        std::cout << "Choose" << std::endl << "1. Creating objects" << std::endl << "2. Operator =" << std::endl <<
//                  "3. Method for get string" << std::endl << "4. Redefinition" << std::endl << "5. Operator +"
//                  << std::endl <<
//                  "6. Operator +=" << std::endl << "7. Operator [ok]" << std::endl << "8. Operator [bad]" << std::endl;
//        std::cin >> userData;
//
//        if (userData == 1) {
//            String str, goodbye("Bye"), null, symbol('a');
//
//            std::cout << ' ' << goodbye.data() << ' ' << symbol.data() << std::endl;
//        } else if (userData == 2) {
//            String str;
//
//            str = "Hello";
//
//            std::cout << str.data() << std::endl;
//        } else if (userData == 3) {
//            String goodbye("Bye");
//
//            std::cout << goodbye.data() << std::endl;
//        } else if (userData == 4) {
//            String goodbye("Bye");
//
//            std::cout << goodbye.data() << std::endl;
//
//            goodbye = "good";
//
//            std::cout << goodbye.data() << std::endl;
//        } else if (userData == 5) {
//            String str("Hello"), goodbye("good"), plus;
//
//            plus = str + goodbye;
//
//            std::cout << str + '!' << ' ' << goodbye + "bye" << ' ' << plus.data() << std::endl;
//        } else if (userData == 6) {
//            String str("Hello"), goodbye("good");
//
//            str += 'A';
//            str += "ll";
//            goodbye += "bye!";
//
//            std::cout << str.data() << ' ' << goodbye.data() << std::endl;
//        } else if (userData == 7) {
//            String str("Hello");
//
//            std::cout << str[3] << std::endl;
//        } else if (userData == 8) {
//            String str("Hello");
//
//            std::cout << str[10] << std::endl;
//        }
//    }
//}
//
//
//String::String() noexcept { str = nullptr, array = nullptr; }
//
//
//String::String(const char *str) noexcept {
//    array = nullptr;
//
//    while (str[strSize] != '\0')
//        strSize++;
//
//    strSize++;
//
//    this->str = new char[strSize];
//
//    for (unsigned i = 0; i < strSize; i++)
//        this->str[i] = str[i];
//}
//
//
//String::String(const char &symbol) noexcept {
//    array = nullptr;
//
//    str = new char[2];
//
//    str[0] = symbol;
//    str[1] = '\0';
//}
//
//
//String::~String() noexcept {
//    delete[] str;
//    delete[] array;
//}
//
//
//String& String::operator=(const char *userStr) noexcept {
//    if (str == nullptr) {
//        while (userStr[strSize] != '\0')
//            strSize++;
//
//        strSize++;
//
//        str = new char[strSize];
//
//        for (unsigned i = 0; i < strSize; i++)
//            this->str[i] = userStr[i];
//    } else {
//        strSize = 0;
//
//        delete[] str;
//
//        while (userStr[strSize] != '\0')
//            strSize++;
//
//        strSize++;
//
//        str = new char[strSize];
//
//        for (unsigned i = 0; i < strSize; i++)
//            this->str[i] = userStr[i];
//    }
//
//    return *this;
//}
//
//
//char String::operator[](const unsigned &elem) const {
//    if (elem > strSize - 2)
//        throw std::range_error("Error! Element of string more than length of string");
//
//    return str[elem];
//}
//
//
//char* String::operator+(const char &elem) noexcept {
//    delete[] array;
//
//    array = new char[strSize];
//
//    for (unsigned i = 0; i < strSize; i++)
//        array[i] = str[i];
//
//    array[strSize - 1] = elem;
//
//    return array;
//}
//
//
//char* String::operator+(const char *elem) noexcept {
//    delete[] array;
//
//    unsigned vecSize = 0;
//
//    while (elem[vecSize] != '\0')
//        vecSize++;
//
//    vecSize++;
//
//    array = new char[strSize + vecSize];
//
//    for (unsigned i = 0; i < strSize + vecSize; i++)
//        array[i] = str[i];
//
//    for (unsigned i = strSize - 1, counter = 0; i < strSize + vecSize; i++, counter++)
//        array[i] = elem[counter];
//
//    return array;
//}
//
//
//char* String::operator+(const String &object) noexcept {
//    delete[] array;
//
//    array = new char[strSize + object.strSize];
//
//    for (unsigned i = 0; i < strSize; i++)
//        array[i] = str[i];
//
//    for (unsigned i = strSize; i < strSize + object.strSize; i++)
//        array[i] = object.str[i];
//
//    return array;
//}
//
//
//String& String::operator+=(const char &elem) noexcept {
//    auto copyArray = new char[strSize];
//
//    for (unsigned i = 0; i < strSize; i++)
//        copyArray[i] = str[i];
//
//    delete[] str;
//
//    str = new char[strSize];
//
//    for (unsigned i = 0; i < strSize; i++)
//        str[i] = copyArray[i];
//
//    str[strSize - 1] = elem;
//
//    delete[] copyArray;
//
//    return *this;
//}
//
//
//String& String::operator+=(const char *elem) noexcept {
//    auto copyArray = new char[strSize];
//
//    for (unsigned i = 0; i < strSize; i++)
//        copyArray[i] = str[i];
//
//    delete[] str;
//
//    unsigned vecSize = 0;
//
//    while (elem[vecSize] != '\0')
//        vecSize++;
//
//    vecSize++;
//
//    strSize += vecSize;
//
//    str = new char[strSize];
//
//    for (unsigned i = 0; i < strSize - vecSize; i++)
//        str[i] = copyArray[i];
//
//    if (strSize % 2)
//        for (unsigned i = strSize - vecSize, counter = 0; counter < vecSize; i++, counter++)
//            str[i] = elem[counter];
//    else
//        for (unsigned i = strSize - vecSize - 1, counter = 0; counter < vecSize; i++, counter++)
//            str[i] = elem[counter];
//
//    delete[] copyArray;
//
//    return *this;
//}
//
//
//String& String::operator+=(const String &object) noexcept {
//    auto copyArray = new char[strSize];
//
//    for (unsigned i = 0; i < strSize; i++)
//        copyArray[i] = str[i];
//
//    delete[] str;
//
//    strSize += object.strSize;
//
//    str = new char[strSize];
//
//    for (unsigned i = 0; i < strSize - object.strSize; i++)
//        str[i] = copyArray[i];
//
//    if ((strSize - object.strSize) % 2)
//        for (unsigned i = strSize - object.strSize - 1, counter = 0; counter < object.strSize; i++, counter++)
//            str[i] = object.str[counter];
//    else
//        for (unsigned i = strSize - object.strSize - 2, counter = 0; counter < object.strSize; i++, counter++)
//            str[i] = object.str[counter];
//
//    delete[] copyArray;
//
//    return *this;
//}
//
//
//char* String::data() const noexcept { return str; }