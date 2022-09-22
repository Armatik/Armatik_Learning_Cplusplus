#include <iostream>
//#include "Lab2/16.cpp"
using namespace std;
int task3_1() {
    int a;
    cout << "Введите сумму для выдачи: \n";
    cin >> a;
    if(a>10000){
        cout << "Число больше 10000. Вскрываюсь!";
        return 0;
    }
    cout << a << " - ";
    if(a == 10000){
        cout << "Десять тысяч рублей";
        return 0;

    }
    if (a / 1000 == 1){
        cout << "Одна тысяча ";
    }
    else if (a / 1000 == 2){
        cout << "Две тысячи ";
    }
    else if (a / 1000 == 3){
        cout << "Три тысячи ";
    }
    else if (a / 1000 == 4){
        cout << "Четыре тысячи ";
    }
    else if (a / 1000 == 5){
        cout << "Пять тысяч ";
    }
    else if (a / 1000 == 6) {
        cout << "Шесть тысяч ";
    }
    else if (a / 1000 == 7){
        cout << "Семь тысяч ";
    }
    else if (a / 1000 == 8){
        cout << "Восемь тысяч ";
    }
    else if (a / 1000 == 9) {
        cout << "Девять тысяч ";
    } else{}
    a = a-(a/1000 * 1000);

    if (a / 100 == 1){
        cout << "сто ";
    }
    else if (a / 100 == 2) {
        cout << "двести ";
    }
    else if (a / 100 == 3) {
        cout << "триса ";
    }
    else if (a / 100 == 4) {
        cout << "четыреста ";
    }
    else if (a / 100 == 5) {
        cout << "пятьсот ";
    }
    else if (a / 100 == 6) {
        cout << "шестьсот ";
    }
    else if (a / 100 == 7) {
        cout << "семьсот ";
    }
    else if (a / 100 == 8) {
        cout << "восемьсот ";
    }
    else if (a / 100 == 9) {
        cout << "девятьсот ";
    } else{
        cout << "";
    }
    a = a - ((a / 100) * 100);
    if (a == 10){
        cout << "десять рублей";
        return 0;
    }
    else if (a == 11){
        cout << "одинадцать рублей";
        return 0;
    }
    else if (a == 12){
        cout << "дведандцать рублей";
        return 0;
    }
    else if (a == 13){
        cout << "тринадцать рублей";
        return 0;
    }
    else if (a == 14){
        cout << "четырнацать рублей";
        return 0;
    }
    else if (a == 15){
        cout << "пятнацать рублей";
        return 0;
    }
    else if (a == 16){
        cout << "шестнадцать рублей";
        return 0;
    }
    else if (a == 17){
        cout << "семнадцать рублей";
        return 0;
    }
    else if (a == 18){
        cout << "восемьнадцать рублей";
        return 0;
    }
    else if (a == 19){
        cout << "дветьнадцать рублей";
        return 0;
    }
    if (a / 10 == 2){
        cout << "двадцать ";
    }
    else if (a / 10 == 3){
        cout << "тридацть ";
    }
    else if (a / 10 == 4){
        cout << "сорок ";
    }
    else if (a / 10 == 5){
        cout << "пятьдесят ";
    }
    else if (a / 10 == 6){
        cout << "шестьдесят ";
    }
    else if (a / 10 == 7){
        cout << "семдесят ";
    }
    else if (a / 10 == 8){
        cout << "восемдесят ";
    }
    else if (a / 10 == 9){
        cout << "девяносто ";
    } else{
    }
    a = a - (a/10 * 10);
    if (a == 1){
        cout << "один рубль";
    }
    else if (a == 2){
        cout << "два рубля";
    }
    else if (a == 3){
        cout << "три рубля";
    }
    else if (a == 4){
        cout << "четыре рубля";
    }
    else if (a == 5){
        cout << "пять рублей";
    }
    else if (a == 6){
        cout << "шесть рублей";
    }
    else if (a == 7){
        cout << "семь рублей";
    }
    else if (a == 8){
        cout << "восемь рублей";
    }
    else if (a == 9){
        cout << "девять рублей";
    }
    else{
        cout << "рублей";
    }



    return 0;
}