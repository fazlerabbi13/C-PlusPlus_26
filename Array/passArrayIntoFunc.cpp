#include<iostream>
using namespace std;

const int arra_size = 5;

void display(int arr[]){
    for(int i = 0; i < arra_size; i++){
        cout << i + 1 << " = " << arr[i] << "\n";
    }
}

int main(){
    int arr[arra_size] = {5, 6, 9, 7, 8};

    display(arr);
    return 0;
}