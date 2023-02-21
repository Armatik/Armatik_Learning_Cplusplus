int main(){
    unsigned short SomeArray[5][4];
    for (int i = 0; i < 5; i++) // знак сравнения в форе не правильный, нужно < а не <= или нужно менять условие в форе
        for (int j = 0; j < 4; j++)
            SomeArray[i][j] = 0;
    return 0;
}