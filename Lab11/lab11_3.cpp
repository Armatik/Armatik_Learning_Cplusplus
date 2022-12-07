//#include <iostream>
//
//class Power_Counter{
//private:
//    unsigned *counter;
//    unsigned *maxcounter;
//    unsigned *step;
//public:
//    Power_Counter(){
//        this->counter = new unsigned (0);
//        this->maxcounter = new unsigned (100);
//        this->step = new unsigned (1);
//    }
//    Power_Counter(const unsigned &maxcounter, const unsigned &step){
//        this->counter = new unsigned (0);
//        this->maxcounter = new unsigned (maxcounter);
//        this->step = new unsigned (step);
//    }
//    ~Power_Counter(){
//        delete this->counter;
//        delete this->maxcounter;
//        delete this->step;
//    }
//    void set_counter(const unsigned &counter){
//        *this->counter = counter;
//    }
//    unsigned get_counter(){
//        return *this->counter;
//    }
//    void set_maxcounter(const unsigned &maxcounter){
//        *this->maxcounter = maxcounter;
//    }
//    unsigned get_maxcounter(){
//        return *this->maxcounter;
//    }
//    void set_step(const unsigned &step){
//        *this->step = step;
//    }
//    unsigned get_step(){
//        return *this->step;
//    }
//
//    void plus_counter(){
//        *counter = *counter + *step;
//        if (*counter > *maxcounter){
//            *counter = *counter - *maxcounter;
//        }
//    }
//};
//
//
//int main(){
//    Power_Counter first{}, second(200, 23);
//    std::cout << "Счётчик 1: Шаг: " << first.get_step() << " Максимальное значение: " << first.get_maxcounter()
//    << "\n";
//    std::cout << "Счётчик 2: Шаг: " << second.get_step() << " Максимальное значение: " << second.get_maxcounter()
//    << "\n";
//    for (unsigned i=0; i <= 123; i++){
//        std::cout << "Шаг: " << i << " Счётчик 1: " << first.get_counter() << " | Счётчик 2: " << second.get_counter()
//        << "\n";
//        first.plus_counter();
//        second.plus_counter();
//    }
//}