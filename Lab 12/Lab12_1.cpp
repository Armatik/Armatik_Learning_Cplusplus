//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string *simbl = new string;         //Динамическая строка
//
//    cout << "Введите строку с помощью Caps: ";
//    getline(cin,*simbl);                //Заполнение строки буквами
//
//    string prom = *simbl;
//    char countSimb = prom[0];           //Вспомогательные переменные
//
//    if(prom.rfind(countSimb) > prom.rfind(" ")){            //Поиск и вывод
//        cout << "\nДа, в последнем слове присутствует буква " << countSimb << ", её номер в строке: " << prom.rfind(countSimb);
//    } else {
//        cout << "\nДанной буквы, в последнем слове нету";
//    }
//
//    delete simbl;           //Освобождение памяти
//
//    return 0;
//}
