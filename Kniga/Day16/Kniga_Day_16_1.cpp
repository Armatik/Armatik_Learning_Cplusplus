#include <iostream.h>
2: int main()
3: {
4:    int x;
5:    cout << "Enter а nurober; ";
6:    cin >> x;
7:    cout << "You entered: " << x << endl;
8:    cerr << "Uh oh, this to cerr!" << endl;
9:    clog << "Ouh oh, this to clog!" << endl;
10:   return 0;
11: }