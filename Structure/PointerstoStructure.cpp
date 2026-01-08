#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inch;
};

int main()
{
    Distance d;
    Distance *ptr = &d;

    // cin >> (*ptr).feet;
    // cin >> (*ptr).inch;

    // use arrow function taking input
    cin >> *ptr->feet;
    cin >> *ptr->inch;

    cout << (*ptr).feet << " feet " << (*ptr).inch << " inches\n";
    
    return 0;
}