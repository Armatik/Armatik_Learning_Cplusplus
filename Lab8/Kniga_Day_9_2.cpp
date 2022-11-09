//#include <iostream>
//
//
//int main() {
//    const int varOne = 6, varTwo, *ptr = &varOne;
//
//    *ptr = 7;
//
//    ptr = &varTwo;
//
//    return 0;
//}
//C:\Users\Sfomc\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\222.4345.21\bin\mingw\bin\g++.exe   -g -MD -MT CMakeFiles/Armatik_Learning_C__.dir/Lab8/Kniga_Day_9_2.cpp.obj -MF CMakeFiles\Armatik_Learning_C__.dir\Lab8\Kniga_Day_9_2.cpp.obj.d -o CMakeFiles/Armatik_Learning_C__.dir/Lab8/Kniga_Day_9_2.cpp.obj -c "C:/Users/Sfomc/Desktop/Project/Programming Learning/Armatik Learning C++/Lab8/Kniga_Day_9_2.cpp"
//C:/Users/Sfomc/Desktop/Project/Programming Learning/Armatik Learning C++/Lab8/Kniga_Day_9_2.cpp: In function 'int main()':
//C:/Users/Sfomc/Desktop/Project/Programming Learning/Armatik Learning C++/Lab8/Kniga_Day_9_2.cpp:5:27: error: uninitialized 'const varTwo' [-fpermissive]
//5 |     const int varOne = 6, varTwo, *ptr = &varOne;
//|                           ^~~~~~
//C:/Users/Sfomc/Desktop/Project/Programming Learning/Armatik Learning C++/Lab8/Kniga_Day_9_2.cpp:7:10: error: assignment of read-only location '* ptr'
//7 |     *ptr = 7;
//|     ~~~~~^~~
