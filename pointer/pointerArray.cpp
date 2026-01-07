#include<iostream>
using namespace std;

int main(){
    int arr[5];
    // int n;
    // cin >> n;

    // cout << "Enter Element: ";

    // for(int i  = 0; i < n; i++){
    //     cin >> *(arr + i);
    // }

    // cout << "Display element: ";

    // for(int i  = 0; i < n; i++){
    //     cout << *(arr + i) << "\n";
    // }

    int *ptr;
    // Displaying address using arrays
    for(int i = 0; i < 3; i++){
        cout << &arr[i] << "\n";
    }

    cout << ".........." << "\n";
    ptr = arr;

    // Displaying address using pointers
    for(int i = 0; i < 3; i++){
        cout << ptr + i << "\n";
    }

    


    
    return 0;
}