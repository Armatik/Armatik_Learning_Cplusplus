//Программа записывающая в переменную в беконечном масиве ссылку на массив с параметрами телефона.

#include <iostream>
#include <string>

//класс односвязного списка с конструктором
class List
{
public:
    List(std::string n) : data(n), next(NULL) {}
    std::string data;
    List *next;
};

//функция добавления элемента в список
void add(List *&head, std::string n)
{
    List *temp = new List(n);
    temp->next = head;
    head = temp;
}

//функция вывода списка
void print(List *head)
{
    while (head != NULL)
    {
        std::cout << head->data << std::endl;
        head = head->next;
    }
}

//Вывод определённого эелемента списка
void print(List *head, int n)
{
    int i = 0;
    while (head != NULL)
    {
        if (i == n)
        {
            std::cout << head->data << std::endl;
            break;
        }
        head = head->next;
        i++;
    }
}


int main(){
    system("chcp 65001");
    List *head = NULL;
    std::string in;
    std::cout << "Введите модель телефона: ";
    std::cin >> in;
    while (in != "stop")
    {
        add(head, in);
        std::cout << "Введите модель телефона: ";
        std::cin >> in;
    }
    print(head);
    print(head, 2);
}