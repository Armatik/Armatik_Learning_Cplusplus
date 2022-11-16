//#include <iostream>
//
//
//void f(unsigned &hours, unsigned &minutes, unsigned &seconds, unsigned &sec);
//
//
//int main() {
//    unsigned userAnswer, hours, minutes, seconds;
//    std::cout << "Write the number of seconds elapsed since the beginning of the day: "; std::cin >> userAnswer;
//
//    f(hours, minutes, seconds, userAnswer);
//
//    std::cout << "Hours = " << hours << std::endl << "Minutes = " << minutes << std::endl << "Seconds = " << seconds << std::endl;
//
//    return 0;
//}
//
//
//void f(unsigned &hours, unsigned &minutes, unsigned &seconds, unsigned &sec) {
//    hours = sec / 3600;
//
//    sec -= hours * 3600;
//
//    minutes = sec / 60;
//
//    sec -= minutes * 60;
//
//    seconds = sec;
//}
