#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    int arr[] = {102, 7, 5};
    v.assign(arr, arr + 4);

    cout << "size of vector: " << int(v.size()) << " value at index 2: " << v.at(2) << "\n";
}