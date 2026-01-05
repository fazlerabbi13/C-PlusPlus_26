#include<iostream>
using namespace std;

// function prototype
int add(int a, int b);

int main(){

    int sum;

    sum = add(5,7);
    cout << sum << "\n";
    
    return 0;
}

// function definition
int add(int a, int b){
    return (a + b);
}