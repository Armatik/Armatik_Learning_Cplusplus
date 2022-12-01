//#include <iostream>
//
//
//class VeryShort {
//private:
//    short itsVal;
//public:
//    explicit VeryShort(const short &val) noexcept;
//
//    ~VeryShort() = default;
//
//    [[nodiscard]] short get_its_val() const noexcept;
//
//    int operator+(const VeryShort &rhs) const noexcept;
//};
//
//
//int main() {
//    VeryShort shortInt(5), shortInt1(6);
//
//    std::cout << shortInt + shortInt1 << std::endl;
//
//    return 0;
//}
//
//
//VeryShort::VeryShort(const short &val) noexcept { itsVal = val; }
//
//
//short VeryShort::get_its_val() const noexcept { return itsVal; }
//
//
//int VeryShort::operator+(const VeryShort &rhs) const noexcept { return itsVal + rhs.itsVal; }
