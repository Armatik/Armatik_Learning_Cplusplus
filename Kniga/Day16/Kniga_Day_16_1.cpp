#include <iostream>
using namespace std; // ввод и вывод
int main() { // главная функция
int x; // переменная для хранения введенного числа
cout << "Enter а nurober; "; // вывод сообщения
cin >> x;
cout << "You entered: " << x << endl; // вывод сообщения и значения переменной
cerr << "Uh oh, this to error!" << endl; // вывод сообщения в поток ошибок
clog << "Ouh oh, this to clog!" << endl; // вывод сообщения в поток журнала
return 0;
}