#include <iostream>


class Massiv{
private:
    int *array;                     // Создаём указатель.
public:
    Massiv(){
        this->array = new int [10]; // Конструктор по умолчанию создаёт массив длиной 10.
    }

    Massiv(const int &elements){    // Конструктор с параметрами создаёт массив указанной длины, но не меньше 2 и не больше 100
        if (elements < 2){ // Проверка на длину по нижней границе.
            this->array = new int [2];
            std::cout << "Вы ввели число элементов массива меньшее 2, создан массив длинной в 2 элемента." << "\n";
        }
        else if (elements > 100){ // Проверка на длину по верхней границе.
            this->array = new int [100];
            std::cout << "Вы ввели число элементов массива большее 100, создан массив длинной в 100 элементов." << "\n";
        }
        else{ // Если массив соответствует параметрам длины, то создаётся с указанной пользователем длинной.
            this->array = new int [elements];
        }
    }

    ~Massiv(){ // Деструктор для освобождения памяти.
        delete [] array;
    }

    void fill_current_element(const unsigned &elements, const unsigned &data_of_element){ // заполняем указанный пользователем элемент нужными данными.
        this->array[elements] = data_of_element;
    }

    void search_first_plus(){ // Поиск первого положительного числа в массиве.
        for (unsigned i = 0; i < sizeof(this->array); i++){
            if (this->array[i] > 0) {
                std::cout << i << " элемент массива больше 0 и равен: " << this->array[i];
                break;
            }
        }
    }
};


int main(){
    Massiv first{}, second(53), third(110), forty(1); // first - конструктор по умолчанию.
    // second - Конструктор с параметрами(Всё соответствует условию). third - Конструктор с параметрами(Уведомление о не соответствии размера).
    // forty - Конструктор с параметрами(Уведомление о не соответствии размера).

    for(unsigned i = 0; i < 10; i++){ // Заполняем массив объекта first числами от -5 до 5.
        first.fill_current_element(i, i-5);
    }

    first.search_first_plus(); // Выводим индекс первого положительного числа массива в объекте first.

    return 0;
}