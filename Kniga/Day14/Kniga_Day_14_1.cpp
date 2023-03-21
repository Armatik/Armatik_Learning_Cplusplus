class statiksmember{
private:
    int *data = new int(0);
    static int count;
public:
    statiksmember(){
        count++;
        *this->data = 5;
    }
    ~statiksmember(){
        count--;
        delete this->data;
    }
};

int statiksmember::count = 0;

int main(){
    statiksmember first;
    return 0;
}