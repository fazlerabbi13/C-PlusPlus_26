#include<iostream>
using namespace std;

int main(){
    int val1 = 5;
    // cout << &val1;

    // find address of variable val1
    int *ptr = &val1;
    cout << ptr;


    // find value of variable val1
    // int *ptr = &val1;
    // cout << *ptr;

    return 0;
}