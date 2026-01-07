#include <iostream>
using namespace std;

int main()
{
    int *age = new int{22};
    float *height = new float{5.9};

    cout << *age << "\n";
    cout << *height << "\n";

    delete age;
    delete height;

    // age = nullptr;
    // height = nullptr;

    return 0;
}