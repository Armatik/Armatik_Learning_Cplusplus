class Shape {
public:
    Shape() noexcept = default;

    virtual ~Shape() noexcept = default;

    explicit Shape(const Shape&) noexcept;
};
