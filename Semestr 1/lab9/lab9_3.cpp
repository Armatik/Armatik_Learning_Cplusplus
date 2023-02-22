//#include <iostream>
//using namespace std;
//
//
//void secToTime( unsigned &secFromUser, unsigned &hours, unsigned &minutes, unsigned &seconds);
//
//
//int main() {
//    unsigned Ans, hours, min, sec;
//    cout << "Введите количество секунд прошедших с начала дня: ";
//    cin >> Ans;
//    secToTime(hours, min, sec, Ans);
//    cout << "\n" << "Hours = " << hours << "\n" << "Minutes = " << min << "\n" << "Seconds = " << sec << "\n";
//
//    return 0;
//}
//
//
//void secToTime(unsigned &secFromUser, unsigned &hours, unsigned &min, unsigned &sec) {
//    hours = secFromUser / 3600;
//    secFromUser -= hours * 3600;
//    min = secFromUser / 60;
//    secFromUser -= min * 60;
//    sec = secFromUser;
//}
