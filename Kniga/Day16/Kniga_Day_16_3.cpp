#include <iostream>
using namespace std;
int main()
{
char ch;
cout << "enter а phrase: "; // введите фразу
while ( cin.get(ch) ); { // получить символ
    switch (ch) { // проверить символ
        case '!':
            cout << '$';
        break; // заменить ! на $
        case '#': // если символ #
        break; // пропустить символ
        default: // если не ! или #
        cout << ch; // вывести символ
        break;
        }
    }
return 0;
}