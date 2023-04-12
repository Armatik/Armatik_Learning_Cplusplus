//
// Created by Armatik_CHUWI on 12.04.2023.
//
#include <iostream>         // подключение стандартной библиотеки ввода/вывода iostream
using namespace std;        // использование стандартного пространства имен std
const int N=10;
class virfig {              // объявление абстрактного класса фигуры
protected:                 // ключевое слово protected позволяет использовать данные произв. классам и друж. функциям
    float x0, y0;            //
    float a, b;
public:                                                        //ключевое слово public для методов класса, чтобы ими можно было воспользоваться везде.
    virfig (float x1=0, float y1=0, float a1=0, float b1=0 ):   //конструтор класса с параметрами
            x0(x1), y0(y1), a(a1), b(b1) {}                          //пе
    virfig (virfig & f): x0(f.x0), y0(f.y0),
                         a(f.a), b(f.b) {}
    virtual virfig * copyf() const = 0;
    virtual float plosh() const = 0;                            // виртуальный метод определения площади
    virtual ostream& prfig(ostream& os)  {                      //функция вывода фигуры на экран с перегруженным оператором <<
        return os << "x0 = " << x0 << ", y0 = " << y0; }
    friend ostream &operator<<(ostream &os, virfig &f)          //перегрузка оператора <<
    { return f.prfig(os); } // оператор <<
};
class vtre: public virfig {             //создание производного класса треугольника от фигуры
public:
    vtre(float x1, float y1, float a1, float b1):               //конструктор с параметрами
            virfig(x1,y1,a1,b1) {}
    vtre(vtre& f): virfig(f) {}                                 //
    virfig* copyf() const                                       // метод класса virfig, создающий новый объект класса на куче
    { return new vtre(x0, y0, a, b);}
    float plosh() const  { return a*b/2; }                       //метод определения площали треугольника
    ostream& prfig(ostream& os) {
        virfig::prfig(os);
        return os << ", kat1 = " << a << ", kat2 = " << b << endl; }    //вывод катетов
};
class vpr: public virfig {              //создание производного класса прямоугольника от фигуры
public:
    vpr (float x1, float y1, float a1, float b1):               //конструктор класса прямоугольника
            virfig(x1,y1,a1,b1) {}
    vpr(vpr& f): virfig(f) {}
    virfig* copyf() const                                       //метод класса virfig создающий новый объект класса на куче
    { return new vpr(x0, y0, a, b);}
    float plosh() const  { return a*b; }                          //метод определения площади
    ostream& prfig(ostream& os) {
        virfig::prfig(os);
        return os << ", side1 = " << a << ", side2 = " << b << endl;}   //метод возвращающий стороны
};
class och {             //класс очереди
    int len;            //переменные: длина списка, максимальная длина, массив объектов класса
    int mlen;
    virfig** v;
public:
    och(int n): len(0), mlen((n > N) ? N : n) { v = new virfig*[mlen]; }     //конструктор с параметром n, тернарный оператор на проверку максимального значения, v - массив объектов класса определенной длины
    och(const och& fm):len(fm.len), mlen(fm.mlen) { // конструктор копирования
        v = new virfig*[mlen]; // выделение памяти
        for (int i=0; i<len; ++i) v[i] = fm.v[i]->copyf(); // копирование
    }
    ~och() { // деструктор
        for (int i = 0; i < len;) delete v[i++]; // удаляем все объекты
        delete [] v; // удаляем массив указателей
    }
    int resize() { // увеличение размера массива
        mlen *= 2; // увеличиваем размер в 2 раза
        virfig** newv = new virfig*[mlen]; // выделяем память
        if (newv) { // если память выделена
            for (int i=0; i<len; ++i) newv[i]=v[i]; // копируем
            delete[] v; // удаляем старый массив
            v = newv; return 1; } // заменяем
        cerr << "Error memory allocation!" << endl; // сообщение об ошибке
        return 0; }
    friend ostream& operator<<(ostream& os, och &fs); // вывод очереди
    int get_size() { return len; } // получение размера очереди
    int get_msize() { return mlen; } // получение максимального размера очереди
    virfig* pop_first() { // удаление первого элемента
        if (!len) return 0; // если очередь пуста
        virfig* f = v[0]; // сохраняем указатель на первый элемент
        for (int i = 1; i < len; ++i) v[i-1] = v[i]; // сдвигаем элементы
        len--; return f; } // уменьшаем размер очереди
    virfig* pop_last() { // удаление последнего элемента
        if (!len) return 0; // если очередь пуста
        len--; return v[len]; } // уменьшаем размер очереди
    int ins_last(const virfig& f) { // вставка в конец
        if (len == mlen) resize(); // если не хватает места
        v[len++] = f.copyf(); return 1; } // копируем объект и увеличиваем размер очереди
    int ins_first(const virfig& f) { // вставка в начало
        if (len == mlen) resize(); // если не хватает места

        for (int i = len; i > 0; --i) v[i] = v[i-1]; // сдвигаем элементы
        len++; // увеличиваем размер очереди
        v[0] = f.copyf(); return 1; } // копируем объект
};
ostream& operator<<(ostream& os, och &f) { // вывод очереди
    os << endl << "***** Ochered of geometric objects: *****" << endl; // заголовок
    for (int i=0; i < f.len;) // вывод элементов
        os << "i = " << i << ", figure=" << *f.v[i++] << endl; // вывод элемента
    return os; // возвращаем поток
}


int main(){
    och f(5); // создаем очередь из 5 элементов
    vtre t(1,2,3,4); // создаем треугольник
    vpr p(5,6,7,8); // создаем прямоугольник
    f.ins_last(t); // вставляем треугольник в конец
    f.ins_first(p); // вставляем прямоугольник в начало
    cout << f; // выводим очередь
    cout << "Size of queue = " << f.get_size() << endl; // выводим размер очереди
    cout << "Max size of queue = " << f.get_msize() << endl; // выводим максимальный размер очереди
    cout << "First figure = " << *f.pop_first() << endl; // выводим первый элемент очереди
    cout << "Last figure = " << *f.pop_last() << endl; // выводим последний элемент очереди
    cout << f; // выводим очередь
    cout << "Size of queue = " << f.get_size() << endl; // выводим размер очереди
    cout << "Max size of queue = " << f.get_msize() << endl; // выводим максимальный размер очереди
    return 0;
}