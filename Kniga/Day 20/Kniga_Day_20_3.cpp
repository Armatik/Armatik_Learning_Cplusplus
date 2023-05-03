// Унаследуйте новое исключение от исключения, полученного в упражнении 2. Измените блок оператора catch таким образом, чтобы в нем происходила обработка как производного, так и базового исключений.

#include <iostream>
class OutOfMemory { // Базовый класс
    public:
        int num; // Переменная-член
        int getNum(){ // Метод доступа
            return num; // Возвращает значение переменной-члена
        }
};
class OutOfMemory2 : public OutOfMemory { // Производный класс
    public:
        int num2; // Переменная-член
        int getNum2(){ // Метод доступа
            return num2; // Возвращает значение переменной-члена
        }
};
int main()
{
    try // Попытка выполнить код внутри блока try
    {
        int *myInt = new int; // Выделение памяти
        myInt = 0; // Присваивание нулевого значения указателю
        if (myInt == 0) // Если указатель равен нулю
        throw OutOfMemory2(); // Генерация исключения
        }
        catch (OutOfMemory2 oom) // Обработка исключения
        {
        std::cout << "Unable to allocate memory!\n"; // Вывод сообщения об ошибке
        std::cout << "Error code: " << oom.getNum() << std::endl; // Вывод значения переменной-члена
        std::cout << "Error code: " << oom.getNum2() << std::endl; // Вывод значения наследуемой переменной-члена
        }
    return 0;
}
