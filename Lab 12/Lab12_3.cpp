//#include <iostream>
//
//using namespace std;
//
//void full(int * array, int len);            //Прототипы
//
//void switced(int * array, int len);
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
//    switced(array, len);
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
//void switced(int * array, int len){         //Замена
//    int max, min, posMax, posMin = 0;
//
//    for (int i = 1; i < len; i++) {         //Нахождение максимального
//        if(array[i-1] > array[i]){
//            max = array[i - 1];
//            posMax = i-1;
//        }
//    }
//    min = max;
//    for (int i = 0; i < len; i++) {         //Нахождение минимального
//        if(min > array[i]){
//            min = array[i];
//            posMin = i;
//        }
//    }
//    array[posMax] = min;                    //Замена
//    array[posMin] = max;
//    cout<<"Наибольшее и наименьшее значение в массиве: "<<max<< " "<< min<<endl <<"Текущий массив: "<< endl;
//
//    for (int i = 0; i < len; i++) {         //Конечный вывод
//        cout<< array[i]<< endl;
//    }
//}
//
//
//
//
//
//
//
//
//
