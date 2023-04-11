#include <fstream>
#include <iostream>

using namespace std;
enum BOOL { FALSE, TRUE }; // определение типа BOOL
int main(int argc, char**argv) // возвращает 1 в случае ошибки
{
if (argc != 2) // проверка наличия аргумента
{
cout << "Usage: argv[0] <infile>\n"; // вывод сообщения об ошибке
return(1);
}

// открываем поток ввода
ifstream fin (argv[1],ios::binary); // открыть файл для чтения
if (!fin)
{
cout << "Unable to open " << argv[1] << " for reading.\n"; // вывод сообщения об ошибке
return(1);
}
char ch;
while ( fin.get(ch)) // получить символ
if ((ch > 32 && ch < 127) || ch == '\n' || ch == '\t') // проверить символ
cout << ch;
fin.close(); // закрыть файл
}