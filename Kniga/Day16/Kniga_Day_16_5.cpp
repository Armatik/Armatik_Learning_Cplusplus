#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char**argv){ // возвращает 1 в случае ошибки
for (int ctr = argc-1; ctr ; ctr--) // проверка наличия аргумента
    cout << argv[ctr] << " "; // вывод сообщения об ошибке
return 0;
}
