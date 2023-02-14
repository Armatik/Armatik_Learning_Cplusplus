class Shape {
public:
    Shape() noexcept = default;

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
    explicit Square(const unsigned &length) noexcept;

    ~Square() override = default;
};


Rectangle::Rectangle(const unsigned &length, const unsigned &width) noexcept {
    this->length = length, this->width = width;
}


Square::Square(const unsigned &length) noexcept :
Rectangle(length, length) { this->length = length; }
