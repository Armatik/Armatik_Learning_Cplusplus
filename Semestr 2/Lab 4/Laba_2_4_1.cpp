//
// Created by armatik on 11.04.23.
//
#include <iostream>

// Программа реализующая классы фигур и очередь фигур
using namespace std;

class fig { // абстрактный класс фигуры
protected:
    float x0, y0; // координаты центра фигуры
    float a; // сторона фигуры
public:
    fig(float x1=0, float y1=0, float a1=0): x0(x1), y0(y1), a(a1) {} // конструктор принимающий координаты центра и сторону
    virtual float sqr() const = 0; // площадь фигуры
    virtual fig* copyf() const = 0; // копирование фигуры
    virtual ostream& show(ostream& os) { // вывод фигуры
        return os << "x0 = " << x0 << ", y0 = " << y0; } // вывод координат центра фигуры
    friend ostream &operator<<(ostream &os, fig &tmp){ return tmp.show(os); } // перегрузка оператора вывода
};

class tre: public fig { // класс треугольник
    float h; // высота треугольника
public:
    tre(float x1, float y1, float a1, float h1): // конструктор принимающий координаты центра, сторону и высоту
            fig(x1, y1, a1), h(h1) {} // конструктор
    fig* copyf() const { return new tre(x0, y0, a, h);} // копирование фигуры
    float sqr() const {return a*h/2;} // площадь фигуры
    ostream& show(ostream& os) {fig::show(os); // вывод фигуры
        return os << ", osnovanie = " << a << ", vysota = " << h << endl; } // вывод координат центра, стороны и высоты
};

class kv: public fig { // класс квадрат
public:
    kv (float x1, float y1, float a1):
            fig(x1, y1, a1) {} // конструктор принимающий координаты центра и сторону
    fig* copyf() const // копирование фигуры
    { return new kv(x0, y0, a);} // конструктор
    float sqr() const {return a*a;} // площадь фигуры
    ostream& show(ostream& os) {fig::show(os); // вывод фигуры
        return os << ", storona = " << a << endl;} // вывод координат центра и стороны
};

struct el { // элемент очереди
    fig* pf; // указатель на фигуру
    el*  next; // указатель на следующий элемент
    el(): pf(0), next(0) {} // конструктор по умолчанию
    el(fig* f): pf(f), next(0) {} // конструктор принимающий указатель на фигуру
    ~el() { delete pf->copyf(); } // деструктор
};

class olist { // класс очередь
    el *elf; // указатель на первый элемент
    el *last; // указатель на последний элемент
public:
    olist() : elf(0) {} // конструктор по умолчанию
    olist(const olist& fl):elf(0) { // конструктор копирования
        for (el* e = fl.elf; e; e = e->next) ins_end(*(e->pf->copyf())); } // копирование очереди
    ~olist() { // деструктор
        for (el* e = elf; e;) { // удаление очереди
            el* t = e->next; // сохранение указателя на следующий элемент
            delete e; // удаление текущего элемента
            e = t; } // переход к следующему элементу
    }
    int get_size() { // получение размера очереди
        int i = 0;
        for (el* e = elf; e; e = e->next, i++); // подсчет элементов
        return i; }
    el* pop_beg() { // удаление первого элемента
        if (!elf) {
            cerr << "Ochered is empty!" << endl; return 0; } // проверка на пустоту очереди
        el* t = elf;
        elf = t->next;
        return t; }
    el* pop_end() { // удаление последнего элемента
        if (!elf) {
            cerr << "Ochered is empty!"; return 0; }
        el *p = 0;
        for (el* e = elf; e->next; e = e->next) p = e; // поиск предпоследнего элемента
            if(!p) elf = 0;
            else p->next = 0;
        return p; }
    int ins_beg(fig& f) { // вставка элемента в начало
        el *t = new el(f.copyf()); // создание нового элемента
        if (!t) { cerr << "Error memory allocation!" << endl;
            return 0; }
        t->next = elf;
        elf = t; return 1;}
    int ins_end(fig& f) { // вставка элемента в конец
        el *t = new el(f.copyf());
        if (!t) { cerr << "Error memory allocation!" << endl;
            return 0; }
        if (!elf) elf = t;
        else {
            for (el* e = elf; e->next; e = e->next) // поиск последнего элемента
            e->next = t; }
        return 1;}
    friend ostream& operator<<(ostream& os, olist &fs); // перегрузка оператора вывода
};
ostream& operator<<(ostream& os, olist &f) { // перегрузка оператора вывода
    os << endl << "***** Ochered of geometric objects: *****" << endl;
    int i = 0;
    for (el* e = f.elf; e; e = e->next) {
        os << "i = " << i << ", figure:" << *e->pf << endl; i++; } // вывод очереди
    return os; }
int main() {
    olist f; // создание очереди
    
    tre t1(1, 2, 3, 4); // создание треугольника
    kv k1(5, 6, 7); // создание квадрата
    f.ins_beg(t1); // вставка треугольника в начало
    f.ins_beg(k1); // вставка квадрата в начало
    cout << f;
    return 0;
    }


