/*
//класс динамической строки где первый элемент строки содержит её длину а 2 и далее символы строки

#include <iostream>
#include <string>

class String {
public:
    char *data;

    String() {
        data = new char[1];
        data[0] = 0;
    }

    String(char *n) {
        int i = 0;
        while (n[i] != '\0') {
            i++;
        }
        data = new char[i + 1];
        data[0] = i;
        for (int j = 0; j < i; j++) {
            data[j + 1] = n[j];
        }
    }

    void print() {
        for (int i = 1; i <= data[0]; i++) {
            std::cout << data[i];
        }
        std::cout << std::endl;
    }

    void add(char *n) {
        int i = 0;
        while (n[i] != '\0') {
            i++;
        }
        char *temp = new char[data[0] + i + 1];
        temp[0] = data[0] + i;
        for (int j = 1; j <= data[0]; j++) {
            temp[j] = data[j];
        }
        for (int j = 1; j <= i; j++) {
            temp[j + data[0]] = n[j - 1];
        }
        delete[] data;
        data = temp;
    }

    void del(int n) {
        char *temp = new char[data[0] - n + 1];
        temp[0] = data[0] - n;
        for (int i = 1; i <= data[0] - n; i++) {
            temp[i] = data[i + n];
        }
        delete[] data;
        data = temp;
    }

    void del(int n, int m) {
        char *temp = new char[data[0] - m + n + 1];
        temp[0] = data[0] - m + n;
        for (int i = 1; i <= n; i++) {
            temp[i] = data[i];
        }
        for (int i = n + 1; i <= data[0] - m + n; i++) {
            temp[i] = data[i + m];
        }
        delete[] data;
        data = temp;
    }

    void insert(char *n, int k) {
        int i = 0;
        while (n[i] != '\0') {
            i++;
        }
        char *temp = new char[data[0] + i + 1];
        temp[0] = data[0] + i;
        for (int j = 1; j <= k; j++) {
            temp[j] = data[j];
        }
        for (int j = 1; j <= i; j++) {
            temp[j + k] = n[j - 1];
        }
        for (int j = k + 1; j <= data[0]; j++) {
            temp[j + i] = data[j];
        }
        delete[] data;
        data = temp;
    }
};

int main(){
    String s1("Hello");
    s1.print();
    s1.add(" world");
    s1.print();
    s1.del(5);
    s1.print();
    s1.del(1, 3);
    s1.print();
    s1.insert(" world", 1);
    s1.print();
    return 0;
}*/
#include <cstdint>


void function(const int64_t &a) {

}


int main() {
    int64_t a = 1;

    function(a);
}
