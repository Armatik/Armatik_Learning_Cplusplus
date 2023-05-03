#include <iostream>
class OutOfMemory {};
int main()
{
    try
    {
        int *myInt = new int;
        myInt = 0;
        if (myInt == 0)
        throw OutOfMemory();
        }
        catch (OutOfMemory)
        {
        std::cout << "Unable to allocate memory!\n";
        }
    return 0;
}