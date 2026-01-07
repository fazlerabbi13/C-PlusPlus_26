#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int n;
    cin >> n;

    cout << "Enter Element: ";

    for(int i  = 0; i < n; i++){
        cin >> *(arr + i);
    }

    cout << "Display element: ";

    for(int i  = 0; i < n; i++){
        cout << *(arr + i) << "\n";
    }

    
    return 0;
}