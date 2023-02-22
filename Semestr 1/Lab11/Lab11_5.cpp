//#include <iostream>
//
//
//class Massiv{
//private:
//    int *array;
//public:
//    Massiv(){
//        this->array = new int [10];
//    }
//    Massiv(const int &elements){
//        if (elements < 2){
//            this->array = new int [2];
//            std::cout << "Вы ввели число элементов массива меньшее 2, создан массив длинной в 2 элемента." << "\n";
//        }
//        else if (elements > 100){
//            this->array = new int [100];
//            std::cout << "Вы ввели число элементов массива большее 100, создан массив длинной в 100 элементов." << "\n";
//        }
//        else{
//            this->array = new int [elements];
//        }
//    }
//    ~Massiv(){
//        delete [] array;
//    }
//    void fill_current_element(const unsigned &elements, const unsigned &data_of_element){
//        this->array[elements] = data_of_element;
//    }
//    void search_first_plus(){
//        for (unsigned i = 0; i < sizeof(this->array); i++){
//            if (this->array[i] > 0) {
//                std::cout << i << " элемент массива больше 0 и равен: " << this->array[i];
//                break;
//            }
//        }
//    }
//};
//
//
//int main(){
//    Massiv first{}, second(53), third(110), forty(1);
//    for(unsigned i = 0; i < 10; i++){
//        first.fill_current_element(i, i-5);
//    }
//    first.search_first_plus();
//    return 0;
//}