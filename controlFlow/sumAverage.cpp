// This program calculates the average of numbers entered by the user.
// If the user enters a negative number, it ignores the number and 
// calculates the average number entered before it.

#include<iostream>
using namespace std;

int main(){
    float num, average, sum = 0;
    int i , n;

    cout << "Maximum number of input: ";
    cin >> n;

    for(i = 1; i <= n; i++)
    cout << i << ": ";
    cin >> num;

    if(num < 0.0){
        goto jump;
    }

    sum += num;

    jump:
    average = sum / (i - 1);
    cout << "\nAverage = " << average;
    return 0;
}

