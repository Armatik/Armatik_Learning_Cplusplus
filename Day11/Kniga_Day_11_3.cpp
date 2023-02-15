class Shape { // Класс Shape
public:
    Shape() noexcept = default; // Конструктор по умолчанию

    ~Shape() noexcept = default; // Деструктор по умолчанию
};


class Rectangle: public Shape { // Класс Rectangle
private:
    unsigned length; // Длина
    unsigned width; // Ширина
public:
    explicit Rectangle(const unsigned &length, const unsigned &width) noexcept; // Конструктор принимающий длину и ширину

    virtual ~Rectangle() noexcept = default; // Виртуальный деструктор
};


class Square: public Rectangle { // Класс Square
private:
    unsigned length; // Длина
public:
    explicit Square(const unsigned &length) noexcept; // Конструктор принимающий длину

    ~Square() override = default; // Деструктор
};


Rectangle::Rectangle(const unsigned &length, const unsigned &width) noexcept { // Конструктор принимающий длину и ширину
    this->length = length, this->width = width;
}


Square::Square(const unsigned &length) noexcept: // Конструктор принимающий длину
Rectangle(length, length) { this->length = length; }


