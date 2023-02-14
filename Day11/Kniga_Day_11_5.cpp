class Shape {
public:
    virtual Shape() noexcept = default;

    ~Shape() noexcept = default;
};


class Rectangle: public Shape {
private:
    unsigned length;
    unsigned width;
public:
    explicit Rectangle(const unsigned &length, const unsigned &width) noexcept;

    virtual ~Rectangle() noexcept = default;
};


class Square: public Rectangle {
private:
    unsigned length;
public:
    Square(const unsigned &length, const unsigned &width, const Square &object) noexcept;

    explicit Square(const unsigned &_length, const unsigned &width, const unsigned &length) noexcept;

    ~Square() override = default;
};


void some_function(Shape);


int main() {
    Shape *ptrRect = new Rectangle(1, 2);  // Неверно создается объект

    some_function(*ptrRect);

    return 0;
}


Rectangle::Rectangle(const unsigned &length, const unsigned &width) noexcept {
    this->length = length, this->width = width;
}


Square::Square(const unsigned &length, const unsigned &width, const Square &object) noexcept :
        Rectangle(length, width) { this->length = object.length; }


Square::Square(const unsigned &_length, const unsigned &width, const unsigned &length) noexcept :
        Rectangle(_length, width) { this->length = length; }
