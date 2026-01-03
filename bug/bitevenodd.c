#include <iostream>
using namespace std;

bool isEven(int n)
{   
    // taking bitwise and of n with 1 
    if ((n & 1) == 0)
        return true;
    else
        return false;
}

int main()
{
    int n = 15;
    if (isEven(n) == true)
        cout << "true";
    else
        cout << "false";

    return 0;
}