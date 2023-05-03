#include <iostream>
#include <string>
class xOutOfMemory // Базовый класс
{
    public:
        xOutOfMemory( const std::string& where ) : location( where ){ } // Конструктор
        ~xOutOfMemory(){ } // Деструктор
        virtual std::string where(){ return location; } // Метод доступа
    private:
        std::string location; // Переменная-член
};

int main()
{
    try
    {
        char *var = new char; // Выделение памяти
        var = 0;
        if ( var == 0 ) // Если указатель равен нулю
        throw xOutOfMemory("main()"); // Генерация исключения
    }
    catch( xOutOfMemory& theException ) // Обработка исключения
    {
        std::cout << "Out of memory at " << theException.where() << "\n"; // Вывод сообщения об ошибке
    }
    return 0;
}