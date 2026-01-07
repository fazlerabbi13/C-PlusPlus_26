#include<iostream>
using namespace std;

void swap(const int& n1,const int& n2){
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}



int main(){
    int n1 = 4, n2 = 6;

    cout << " Before swapping: " << "n1: " << n1 << " " << "n2: " << n2 << "\n";

    swap(n1, n2);

    cout << "After swapping: " << "n1: " <<  n1 << " " << "n2: " << n2 << "\n";
    return 0;
}