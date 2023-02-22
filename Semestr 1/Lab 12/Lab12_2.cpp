//#include <iostream>
//
//using namespace std;
//
//void full(int * array, int len);            //Прототипы
//
//int count(int * array, int len);
//
//int main()
//{
//    srand(time(nullptr));
//    int len;
//    cout<<"Введите размер массива: "; cin>> len;
//
//    int *array = new int[len];              //Создание динамического массива
//
//    full(array, len);
//
//    cout<<"Промежутков монотонности: "<<count(array, len);
//
//    delete [] array;                        //Удаление динамического массива
//
//    return 0;
//}
//
//void full(int * array, int len){            //Заполнение массива
//    for (int i = 0; i < len; i++) {
//        array[i] = rand() % 1000;
//        cout<< array[i]<< endl;
//    }
//}
//
//int count(int * a, int n){              //Нахождение и подсчёт промежутков монотонности
//    unsigned i, j, m = 0;
//    for(i = 1; i < n; i = j){
//        j = i;
//        while((j < n) && (a[j] >= a[j - 1]))
//            ++j;
//        if((j - i) > 1)
//            ++m;
//
//        i = j;
//        while((j < n) && (a[j] <= a[j - 1]))
//            ++j;
//        if((j - i) > 1)
//            ++m;
//    }
//    return m;
//}
//
//
//
//
//
//
//
//
