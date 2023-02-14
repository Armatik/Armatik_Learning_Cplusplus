class Shape {
public:
    Shape() noexcept = default;

    ~Shape() noexcept = default;
};


class Rectangle: public Shape {
public:
    Rectangle() noexcept = default;

    ~Rectangle() noexcept = default;
};


class Square: public Rectangle {
public:
    Square() noexcept = default;

    ~Square() noexcept = default;
};
