//#include <iostream>
//
//class CAT {
//private:
//    int itsAge;
//public:
//    CAT(int age){
//        itsAge = age;
//    }
//
//    ~CAT(){
//    };
//    int GetAge() const{
//        return itsAge;
//    }
//};
//
//CAT& MakeCat(int age);
//int main() {
//    int age = 7;
//    CAT boots = MakeCat(age);
//    std::cout << "Boots is " << boots.GetAge() << " years old!\n";
//    delete &boots;
//    return 0;
//}
//
//CAT& MakeCat(int age) {
//    CAT *pCat = new CAT(age);
//    return *pCat;
//}
