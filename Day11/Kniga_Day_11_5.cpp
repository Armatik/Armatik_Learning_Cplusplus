class Shape { // Класс Shape
public:
    virtual Shape() noexcept = default; // Конструктор по умолчанию

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
    Square(const unsigned &length, const unsigned &width, const Square &object) noexcept; // Конструктор принимающий длину, ширину и объект

    explicit Square(const unsigned &_length, const unsigned &width, const unsigned &length) noexcept; // Конструктор принимающий длину, ширину и длину

    ~Square() override = default; // Деструктор
};


void some_function(Shape); // Функция принимающая объект класса Shape


int main() {
    Shape *ptrRect = new Rectangle(1, 2);  // Неверно создается объект

    some_function(*ptrRect);

    return 0;
}


Rectangle::Rectangle(const unsigned &length, const unsigned &width) noexcept { // Конструктор принимающий длину и ширину
    this->length = length, this->width = width;
}


Square::Square(const unsigned &length, const unsigned &width, const Square &object) noexcept : // Конструктор принимающий длину, ширину и объект
        Rectangle(length, width) { this->length = object.length; }


Square::Square(const unsigned &_length, const unsigned &width, const unsigned &length) noexcept : // Конструктор принимающий длину, ширину и длину
        Rectangle(_length, width) { this->length = length; }

