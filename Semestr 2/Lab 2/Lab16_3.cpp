#include <iostream>
#include <string>

class List{
    public:
        int *data;
        List *next;
        List *prev;

        List(){
        data = new int(0);
        next = NULL;
        prev = NULL;
        }

        List(int n){
            data = new int(n);
            next = NULL;
            prev = NULL;
        }

        void add(List *head, int n){ // добавление узла
            while (head->next != NULL) // поиск последнего узла
            {
                head = head->next;
            }
            List *temp = new List(n); // создание нового узла
            temp->next = head; // присваивание указателю на следующий узел адреса узла перед добавляемым
            head->prev = temp; // присваивание указателю на предыдущий узел адреса добавляемого узла
        }

        void print(List *head){ // вывод списка
            while (head != NULL)
            {
                std::cout << head->data << std::endl; // вывод значения узла
                head = head->next;
            }
        }

        void print(List *head, int n){ // вывод определённого узла
            int i = 0;
            while (head != NULL) // поиск узла
            {
                if (i == n) // если узел найден
                {
                    std::cout << *head->data << std::endl; // вывод значения узла
                    break;
                }
                head = head->next;
                i++;
            }
        }

        void del(List *&head, int n){ // удаление узла
            int i = 0;
            while (head != NULL) // поиск узла
            {
                if (i == n) // если узел найден
                {
                    head->prev->next = head->next; // присваивание указателю на следующий узел адреса узла после удаляемого
                    head->next->prev = head->prev; // присваивание указателю на предыдущий узел адреса узла перед удаляемым
                    delete head; // удаление узла
                    break;
                }
                head = head->next; // переход к следующему узлу
                i++;
            }
        }

        ~List(){
            delete data;
        }
};

int main(){
    List *head = new List(0);
    std::cout << "Ok" << std::endl;
    for (int i = 0; i < 4; i++){
        head->add(head, i+1);
    }

    head->print(head, 2);

    for (int i = 0; i < 5; i++){
        if (*head->data % 2 != 0){
            head->del(head, i);
        }
    }
    return 0;
}
