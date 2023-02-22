class Shape { // Класс Shape
public:
    Shape() noexcept = default; // Конструктор по умолчанию

    ~Shape() noexcept = default;
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
    Square(const Square &object) noexcept; // Конструктор принимающий объект

    explicit Square(const unsigned &length) noexcept; // Конструктор принимающий длину

    ~Square() override = default; // Деструктор
};


Rectangle::Rectangle(const unsigned &length, const unsigned &width) noexcept {
    this->length = length, this->width = width;
}


Square::Square(const Square &object) noexcept :
Rectangle(object.length, object.length) { this->length = object.length; }


Square::Square(const unsigned &length) noexcept :
Rectangle(length, length) { this->length = length; }