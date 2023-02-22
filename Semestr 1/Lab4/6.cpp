#include <iostream>
#include <windows.h>
using namespace std;


int Lab4_6(){
	int h,m,cnt;
	cout<<"Введите количество часов: ";
    cin >> h;
	cout<<"Введите количество минут: ";
    cin >> m;

	cnt = 11 * (60 * h + m) % 720;
	if (cnt != 0)
		cnt = 720 - cnt;
	cnt /= 11;
		cout << cnt << " минут" << endl;
}
