#include <iostream>
#include <list>


class student_record {
private:
    std::list<unsigned> mark;
public:
    student_record() = default;

    student_record(const std::list<unsigned> &mark) noexcept {
        this->mark = mark;
    }

    student_record(const student_record &other) noexcept {
        this->mark = other.mark;
    }

    ~student_record() noexcept = default;

    void add_mark(const unsigned &mark) noexcept {
        this->mark.push_back(mark);
    }

    void del_mark(const unsigned &mark) noexcept {
        this->mark.remove(mark);
    }

    void show_records_with_range(const unsigned &min, const unsigned &max) const noexcept {
        for (auto i = this->mark.begin(); i != this->mark.end(); i++) { // автоматический перебор элементов списка
            if (*i >= min && *i <= max) { // если элемент входит в диапазон
                std::cout << *i << " | ";// вывод элемента
            }
        }
        std::cout << std::endl;
    }
    void show_all_marks() const noexcept {
        for (auto i = this->mark.begin(); i != this->mark.end(); i++) { // автоматический перебор элементов списка
            std::cout << *i << " | "; // вывод элемента
        }
        std::cout << std::endl;
    }
};


int main() {
    student_record record({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    record.add_mark(11);
    record.show_all_marks();
    record.del_mark(5);
    record.show_records_with_range(3, 7);
    return 0;
}


