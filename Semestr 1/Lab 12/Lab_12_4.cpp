//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    string *simbl = new string;         //Динамическая строка
//
//    cout << "Введите строку с помощью (Допустимы латиница, цифры, и один символ +): ";
//    getline(cin,*simbl);
//
//    string prom = *simbl;
//
//    int len = prom.find('+');
//    for (int i = 0; i < len; i++) {
//        if(prom[i] == '0'){
//            prom[i] = '-';
//        }
//        if(prom[i] == '1'){
//            prom[i] = '-';
//        }
//        if(prom[i] == '2'){
//            prom[i] = '-';
//        }
//        if(prom[i] == '3'){
//            prom[i] = '-';
//        }
//        if(prom[i] == '4'){
//            prom[i] = '-';
//        }
//        if(prom[i] == '5'){
//            prom[i] = '-';
//        }
//        if(prom[i] == '6'){
//            prom[i] = '-';
//        }
//        if(prom[i] == '7'){
//            prom[i] = '-';
//        }
//        if(prom[i] == '8'){
//            prom[i] = '-';
//        }
//        if(prom[i] == '9'){
//            prom[i] = '-';
//        }
//    }
//
//    cout<<prom;
//
//    delete simbl;           //Освобождение памяти
//
//    return 0;
//}