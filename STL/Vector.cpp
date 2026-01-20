#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    // range constructor vector to vector
    vector<int> v1(5);
    
    // for(int i = 0; i < v1.size(); i++)
    // cin >> v1[i];
    
    // vector<int> v2(v1.rbegin(), v1.rend());

    // for(int i = 0; i <v2.size(); i++)
    // cout << v2[i] <<"\n";



    int arr[] = {102, 7, 5};
    v1.assign(arr, arr + 4);
    v1.resize(10);
    cout << "size of vector: " << int(v1.size()) << " value at index 2: " << v1.at(2) << "\n";
}