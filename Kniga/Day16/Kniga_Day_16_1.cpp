#include <iostream>
using namespace std;
int main()
{
int x;
cout << "Enter а nurober; ";
cin >> x;
cout << "You entered: " << x << endl;
cerr << "Uh oh, this to cerr!" << endl;
clog << "Ouh oh, this to clog!" << endl;
return 0;
}