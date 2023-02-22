#include <iostream>

int Lab5_11(){
    const int n=5;
    int A[n], B[n], C[n+n], i, j, k;
    std::cout<<"Объединение двух упорядоченных по возрастанию массивов. Введите в одной строке элементы первого массива,("<<n<<"\n целых чисел) ->";
    for (i=0; i<n; i++)
        std::cin>>A[i];
    std::cout<<"Введите в одной строке элементы второго массива,("<<n<<"\n целых чисел) ->";
    for (i=0; i<n; i++)
        std::cin>>B[i];
    i=0, j=0, k=0;
    do{
        while (A[i]<B[j]&&i<n)
        {
            C[k++]=A[i];
            i++;
        }
        while (A[i]>B[j]&&j<n)
        {
            C[k++]=B[j];
            j++;
        }
        while (A[i]==B[i]&&i<n&&j<n)
        {
            C[k++]=A[i++];
            C[k++]=B[j++];
        }
        if (i==n)
            while (j<n)
                C[k++]=B[j++];
        if (j==n)
            while (i<n)
                C[k++]=A[i++];
    }
    while (k<n+n);
    std::cout<<"Массив — результат ";
    for (i=0; i<n+n; i++)
        std::cout<<C[i]<<' ';
    std::cout<<"Для завершения работы нажмите <Enter>.";
    return 0;
}