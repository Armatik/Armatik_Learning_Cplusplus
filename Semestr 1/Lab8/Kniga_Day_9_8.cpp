//#include <iostream>
//
//
//class Cat {
//private:
//    int itsAge;
//public:
//    explicit Cat(const int &age) { itsAge = age; }
//
//    ~Cat() = default;
//
//    [[nodiscard]] int get_age() const { return itsAge; }
//};
//
//
//Cat& make_cat(int age);
//void delete_cat(Cat &cat);
//
//
//int main() {
//    Cat boots = make_cat(7);
//
//    std::cout << "boots is " << boots.get_age() << " years old!" << std::endl;
//
//    delete_cat(boots);
//
//    return 0;
//}
//
//
//Cat& make_cat(int age) {
//    Cat *pCat = new Cat(age);
//    return *pCat;
//}
//
//
//void delete_cat(Cat &cat) { delete &cat; }
