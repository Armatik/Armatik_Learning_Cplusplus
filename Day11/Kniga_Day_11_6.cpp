class Shape {   // Класс Shape
public:
    Shape() noexcept = default; // Конструктор по умолчанию

    virtual ~Shape() noexcept = default; // Виртуальный деструктор

    explicit Shape(const Shape&) noexcept; // Конструктор копирования
};
