//Объявите класс узла Node, поддерживающего целые числа.

#include <iostream>

class Node {
private:
    int data;
    Node *next;
public:
    Node() = default;

    Node(int data, Node *next) {
        this->data = data;
        this->next = next;
    }

    int getData() const {
        return data;
    }

    Node *getNext() const {
        return next;
    }

    void setData(int data) {
        this->data = data;
    }

    void setNext(Node *next) {
        this->next = next;
    }
};