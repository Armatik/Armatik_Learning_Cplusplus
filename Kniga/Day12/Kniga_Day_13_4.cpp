int main(){
unsigned short SomeArray[5][4];
for (int i = 0; i < 5; i++) // неправильное расположение чисел в форах при задании значений в массиве
    for (int j = 0; j < 4; j++)
        SomeArray[i][j] = 0;
return 0;
}

