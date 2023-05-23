//
// Created by armatik on 19.04.23.
//

// Описать шаблонный класс List для работы с однонаправленными списками в динамической памяти.
//Для объектов класса List определить операции проверки добавления элемента в начало списка, в конец списка, вставка и удаление элемента в списке по ключу.
//Продемонстрировать работу с шаблонным классом для списка с вещественными элементами и с элементами-словами.

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

template <typename T>
class List {
struct Node {
        T data;
        Node* next;
    };
    Node* head;
    Node* tail;
    int size;
public:
List() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    ~List() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
    void push_back(T data) {
        Node* node = new Node;
        node->data = data;
        node->next = nullptr;
        if (head == nullptr) {
            head = node;
        }
        else {
            tail->next = node;
        }
        tail = node;
        size++;
    }
    void push_front(T data) {
        Node* node = new Node;
        node->data = data;
        node->next = head;
        head = node;
        if (tail == nullptr) {
            tail = node;
        }
        size++;
    }
    void insert(T data, int index) {
        if (index == 0) {
            push_front(data);
        }
        else {
            Node* previous = this->head;
            for (int i = 0; i < index - 1; i++) {
                previous = previous->next;
            }
            Node* newNode = new Node;
            newNode->data = data;
            newNode->next = previous->next;
            previous->next = newNode;
            size++;
        }
    }
    void remove(int index) {
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            size--;
            if (head == nullptr) {
                tail = nullptr;
            }
        }
        else {
            Node* previous = this->head;
            for (int i = 0; i < index - 1; i++) {
                previous = previous->next;
            }
            Node* toDelete = previous->next;
            previous->next = toDelete->next;
            delete toDelete;
            size--;
            if (previous->next == nullptr) {
                tail = previous;
            }
        }
    }
    T& operator[](const int index) {
        int counter = 0;
        Node* current = this->head;
        while (current != nullptr) {
            if (counter == index) {
                return current->data;
            }
            current = current->next;
            counter++;
        }
    }
    int get_size() {
        return size;
    }
    void print_to_console() {
        Node* current = this->head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    List<int> list;
    // демонстрация работы с шаблонным классом для списка с вещественными элементами
    List<double> list2;
    // демонстрация работы с шаблонным классом для списка с элементами-словами
    List<string> list3;
    // заполнение и вывод списков
    for (int i = 0; i < 10; i++) {
        list.push_back(i);
        list2.push_back(i * 0.1);
        list3.push_back("word" + to_string(i));
    }
    list.print_to_console();
    list2.print_to_console();
    list3.print_to_console();
    return 0;
}