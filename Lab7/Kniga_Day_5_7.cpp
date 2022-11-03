//#include <iostream>
//using namespace std;
//
//double degree(double number, unsigned numberDegree);
//
//
//int main() {
//    double number, result;
//    unsigned numberDegree;
//
//    cout << "Введите число и показатель его степени через пробел: ";
//    cin >> number >> numberDegree;
//
//    result = degree(number, numberDegree);
//    cout << result << "\n";
//
//    return 0;
//}
//
//
//double degree(double number, unsigned numberDegree) {
//    static double con = number;
//    number *= con;
//    numberDegree = numberDegree - 1;
//    if (numberDegree >= 1) {
//        return degree(number, numberDegree);
//    }
//    return number / con;
//}
