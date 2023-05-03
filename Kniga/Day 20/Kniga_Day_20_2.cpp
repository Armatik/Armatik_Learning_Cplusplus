// Добавьте в исключение, полученное в упражнении 1, переменную-член и метод доступа и используйте их в блоке оператора catch.

#include <iostream>
class OutOfMemory { // Базовый класс
    public:
        int num; // Переменная-член
        int getNum(){ // Метод доступа
            return num; // Возвращает значение переменной-члена
        }
};
int main()
{
    try // Попытка выполнить код внутри блока try
    {
        int *myInt = new int; // Выделение памяти
        myInt = 0; // Присваивание нулевого значения указателю
        if (myInt == 0) // Если указатель равен нулю
        throw OutOfMemory(); // Генерация исключения
        }
        catch (OutOfMemory oom) // Обработка исключения
        {
        std::cout << "Unable to allocate memory!\n"; // Вывод сообщения об ошибке
        std::cout << "Error code: " << oom.getNum() << std::endl; // Вывод значения переменной-члена
        }
    return 0;
}
