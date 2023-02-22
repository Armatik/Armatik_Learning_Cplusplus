class Shape { // Класс Shape
public:
    Shape() noexcept = default; // Конструктор по умолчанию

    ~Shape() noexcept = default; // Деструктор по умолчанию
};


class Rectangle: public Shape { // Класс Rectangle
public:
    Rectangle() noexcept = default; // Конструктор по умолчанию

    ~Rectangle() noexcept = default; //
};


class Square: public Rectangle { // Класс Square
public:
    Square() noexcept = default; // Конструктор по умолчанию

    ~Square() noexcept = default; // Деструктор по умолчанию
};
