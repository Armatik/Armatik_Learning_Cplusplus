// Описать шаблонный класс List для работы с однонаправленными списками в
//динамической памяти.
// Определить конструктор, деструктор, операции вставки, удаления, поиска

#include <iostream>
#include <string>

template <typename T>
class List
{
private:
    struct Node
    {
        T data;
        Node* next;
    };
    Node* head;
    Node* tail;
    int size;
public:
    List(){ // конструктор
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    ~List(){ // деструктор
        while (head != nullptr) // пока по адресу на начало списка что-то есть
        {
            Node* temp = head; // запоминаем адрес текущего элемента
            head = head->next; // переходим к следующему элементу
            delete temp; // освобождаем память от temp
        }
    }
    void push_back(T data){ // добавление в конец
        Node* temp = new Node; // выделяем память под новый элемент
        temp->data = data; // присваиваем значение
        temp->next = nullptr; // указываем, что следующий элемент пока не задан
        if (head == nullptr) // если список пуст
        {
            head = temp; // указываем, что новый элемент теперь голова списка
            tail = temp; // указываем, что новый элемент теперь хвост списка
        }
        else
        {
            tail->next = temp; // указываем текущему хвосту списка адрес нового элемента
            tail = tail->next; // заменяем хвост списка новым элементом
        }
        size++; // увеличиваем размер списка
    }
    void push_front(T data){ // добавление в начало
        Node* temp = new Node; // выделяем память под новый элемент
        temp->data = data; // присваиваем значение
        temp->next = head; // указываем, что следующий элемент это бывший головной
        head = temp; // указываем, что новый элемент теперь голова списка
        size++; // увеличиваем размер списка
    }
    void pop_back(){ // удаление с конца
        if (head == nullptr) // если список пуст
        {
            std::cout << "List is empty" << std::endl; // сообщаем об этом
            return; // выходим из функции
        }
        if (head == tail) // если в списке только один элемент
        {
            delete head; // удаляем этот элемент
            head = nullptr; // обнуляем значение головы
            tail = nullptr; // обнуляем значение хвоста
            size--; // уменьшаем размер списка
            return; // выходим из функции
        }
        Node* temp = head; // запоминаем адрес головного элемента
        while (temp->next != tail)
        {
            temp = temp->next; // переходим к следующему элементу
        }
        delete tail; // удаляем хвостовой элемент
        tail = temp; // переопределяем хвост
        tail->next = nullptr; // зануляем указатель на следующий за хвостом элемент
        size--;
    }
    void pop_front(){ // удаление с начала
        if (head == nullptr)  // если список пуст
        {
            std::cout << "List is empty" << std::endl; // сообщаем об этом
            return;
        }
        if (head == tail) // если в списке только один элемент
        {
            delete head;
            head = nullptr;
            tail = nullptr;
            size--;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }
    void insert(T data, int index){ // вставка по индексу
        if (index < 0 || index > size) // если индекс некорректный
        {
            std::cout << "Index out of range" << std::endl; // сообщаем об этом
            return;
        }
        if (index == 0) // если вставка в начало
        {
            push_front(data);
            return;
        }
        if (index == size) // если вставка в конец
        {
            push_back(data);
            return;
        }
        Node* temp = head;
        for (int i = 0; i < index - 1; i++) // ищем элемент, предшествующий тому, который хотим вставить
        {
            temp = temp->next;
        }
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = temp->next;
        temp->next = newNode;
        size++;
    }
    void remove(int index){ // удаление по индексу
        if (index < 0 || index >= size) // если индекс некорректный
        {
            std::cout << "Index out of range" << std::endl;
            return;
        }
        if (index == 0)
        {
            pop_front();
            return;
        }
        if (index == size - 1)
        {
            pop_back();
            return;
        }
        Node* temp = head;
        for (int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
        }
        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
        size--;
    }
    int find(T data){ // поиск индекса по значению
        Node* temp = head;
        int index = 0;
        while (temp != nullptr) // пока не встретим пустое значение
        {
            if (temp->data == data) // если значение элемента равно искомому
            {
                return index;
            }
            temp = temp->next; // переходим к следующему элементу
            index++;
        }
        return -1;
    }
    void print(){ // вывод списка на экран
        Node* temp = head;
        while (temp != nullptr)
        {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
    int getSize(){ // получение размера списка
        return size;
    }
};

int main()
{
    List<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_front(0);
    list.print();
    list.pop_back();
    list.print();
    list.pop_front();
    list.print();
    list.insert(0, 0);
    list.insert(3, 3);
    list.insert(2, 2);
    list.print();
    list.remove(0);
    list.remove(3);
    list.remove(2);
    list.print();
    std::cout << list.find(2) << std::endl;
    std::cout << list.find(3) << std::endl;
    std::cout << list.find(0) << std::endl;
    std::cout << list.find(1) << std::endl;
    std::cout << list.find(4) << std::endl;
    std::cout << list.getSize() << std::endl;
    return 0;
}
