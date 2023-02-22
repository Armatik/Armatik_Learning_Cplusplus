#include <iostream>
using namespace std;

int Lab5_5()
{
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    int array[size];
    int count=0;
    cout << "\n";
    for(int i=0;i<size;i++)
    {
        cout<<"Введите "<<i+1<<" элемент:"<<endl;
        cin>>array[i];
        if(array[i] != 0)
            count++;
    }
    cout<<"Всего "<<count<<" не нулевых элементов."<<endl;
    return 0;
}