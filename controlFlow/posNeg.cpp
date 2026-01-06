#include <iostream>
using namespace std;

int main() {

  int num;
    
  cout << "Enter an integer: ";  
    cin >> num;    

  // outer if condition
  if (num != 0) {
        
    if (num > 0) {
      cout << "The number is positive." << "\n";
    }
    else {
      cout << "The number is negative." << "\n";
    }  
  }
  else {
    cout << "The number is 0 and it is neither positive nor negative." << "\n";
  }

  return 0;
}