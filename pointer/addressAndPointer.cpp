#include <iostream>
using namespace std;

int main()
{
    int val1 = 5;
    // cout << &val1;

    // find address of variable val1
    {
        int *ptr = &val1;
        cout << ptr; // prints address
    }

    cout << "\n";
    // find value of variable val1
    {
        int *ptr = &val1;
        cout << *ptr; // prints value
    }

    return 0;
}