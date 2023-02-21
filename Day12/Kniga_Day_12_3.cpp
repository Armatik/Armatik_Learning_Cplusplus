#include <iostream>

class Node {
private:
    int data;
    Node* next;
public:
    Node() = default;

    Node(int data, Node *next) {
        this->data = data;
        this->next = next;
    }

    int getData() const {
        return data;
    }

    Node* getNext() const {
        return next;
    }

    void setData(int data) {
        this->data = data;
    }

    void setNext(Node *next) {
        this->next = next;
    }
};

int main(){
    Node* head = new Node(1, nullptr);
    Node* tail = head;
    for (int i = 2; i < 10; i++) {
        Node* node = new Node(i, nullptr);
        tail->setNext(node);
        tail = node;
    }
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->getData() << std::endl;
        current = current->getNext();
    }
    return 0;
}