#include <iostream>
using namespace std;
int main()
{
char name[80]; // массив для хранения строки
cout << "Enter your full name: "; // введите ваше полное имя
cin.getline(name,80); // получить строку
cout << "\nYou entered: " << name << endl; // вывести строку
return 0;
}