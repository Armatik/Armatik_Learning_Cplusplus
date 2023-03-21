#include <iostream>
#include <queue>

void inputQueue(std::queue <int> *queue, int num){
    for (int i = 0; i < num; i++){
        int num;
        std::cin >> num;
        queue->push(num);
    }
}

void printQueue(std::queue <int> *queue){
    while(!queue->empty()){
        std::cout << queue->front() << " ";
        queue->pop();
    }
}

int main(){
    std::queue <int> q1;
    std::queue <int> q2;
    int numcount = 5;

    std::cout << "Enter " << numcount << " numbers for queue 1: ";
    inputQueue(&q1, numcount);

    std::cout << "Enter " << numcount << " numbers for queue 2: ";
    inputQueue(&q2, numcount);

    while(!q1.empty()){
        if (q1.front() % 2 != 0){
            q2.push(q1.front());
            q1.pop();
        } else{
            break;
        }
    }
    printQueue(&q1);
    std::cout << std::endl;
    printQueue(&q2);
    return 0;
}
