//class SQUARE {
//private:
//    unsigned *itsSide;
//public:
//    explicit SQUARE(const unsigned &side) noexcept;
//
//    ~SQUARE() noexcept;
//
//    [[nodiscard]] unsigned get_side() const noexcept;
//
//    SQUARE& operator=(const SQUARE &rhs) noexcept;
//};
//
//
//SQUARE::SQUARE(const unsigned int &side) noexcept { itsSide = new unsigned(side); }
//
//
//SQUARE::~SQUARE() noexcept { delete itsSide; }
//
//
//unsigned SQUARE::get_side() const noexcept { return *itsSide; }
//
//
//SQUARE& SQUARE::operator=(const SQUARE &rhs) noexcept {
//    if (*itsSide >= 0)
//        *itsSide = rhs.get_side();
//    else
//        itsSide = new unsigned(rhs.get_side());
//
//    return *this;
//}