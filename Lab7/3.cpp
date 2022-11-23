//#include <iostream>
//#include <random>
////#include "Lab2/16.cpp"
//using namespace std;
//
//int cubic_rand() {//  Заполняем и выводим массив
//    random_device rd;
//    mt19937 gen(rd());
//    uniform_int_distribution<> dist(1, 6);
//    return dist(gen);
//}
//void show_cube(int i){
//    switch(i){
//        case 1:
//            cout << "⚀ ";
//            break;
//        case 2:
//            cout << "⚁ ";
//            break;
//        case 3:
//            cout << "⚂ ";
//            break;
//        case 4:
//            cout << "⚃ ";
//            break;
//        case 5:
//            cout << "⚄ ";
//            break;
//        case 6:
//            cout << "⚅ ";
//            break;
//    }
//}
//int Lab7_3(){
//    system( "chcp 65001");
//    cout << "Игра в кубик. Первый ход за: ";
//    int comp[4], user[4];
//    int c, respc, resusr;
//    bool cont = 1;
//    if (cubic_rand() >= cubic_rand()){
//        cout << "Компьютер" << "\n";
//        c = 1;
//    }
//    else{
//        cout << "Пользователь" << "\n";
//        c = 0;
//    }
//    cout << "Начинаем игру! Введите 0 для остановки программы" << "\n";
//    while (cont){
//        for (int i=0; i < 4; i++){
//            cout << "Ход " << i << "\n";
//            if (c == 1) {
//                comp[i] = cubic_rand();
//                cout << "Компьютеру выпало: " << comp[i] << "\n";
//                respc = respc + comp[i];
//                user[i] = cubic_rand();
//                cout << "Юзеру выпало: " << user[i] << "\n";
//                resusr = resusr + user[i];
//            }
//            if (c == 0) {
//                user[i] = cubic_rand();
//                cout << "Юзеру выпало: " << comp[i] << "\n";
//                resusr = resusr + user[i];
//                comp[i] = cubic_rand();
//                cout << "Компьютеру выпало: " << comp[i] << "\n";
//                respc = respc + comp[i];
//            }
//        }
//        cout << "Результат игры: " << "\n";
//        cout << "Компьютер: ";
//        for (int i=0; i < 4; i++) {
//            show_cube(comp[i]);
//        }
//        cout << "= " << respc << "\n" << "Пользователь: ";
//        for (int i=0; i < 4; i++) {
//            show_cube(user[i]);
//        }
//        cout << "= " << resusr << "\n";
//        if (resusr > respc){
//            cout << "Выиграл пользователь с результатом: " << resusr << ":" << respc<< "\n";
//        }
//        else if (resusr < respc){
//            cout << "Выиграл компьютер с результатом: " << respc << ":" << resusr<< "\n";
//        }
//        else if (resusr == respc){
//            cout << "Ничья с результатом: " << respc << ":" << resusr<< "\n";
//        }
//        cout << "Продолжить игру? Введите 1 если да и 0 если нет" << "\n";
//        cin >> cont;
//    }
//    return 0;
//}