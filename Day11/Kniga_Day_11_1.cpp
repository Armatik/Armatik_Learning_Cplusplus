class Test {
public:
    Test() noexcept = default;

    ~Test() noexcept = default;

    virtual void function(const int &number) = 0;
};
