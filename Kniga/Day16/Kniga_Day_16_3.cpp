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
        break;
        case '#':
        break;
        default:
        cout << ch;
        break;
        }
    }
return 0;
}