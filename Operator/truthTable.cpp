#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
  
    // false && false = false
    cout << ((a == 0) || (a > b)) << "\n";
  
    // false && true = true
    cout << ((a == 0) || (a < b)) << "\n";

    // true && false = true
    cout << ((a == 5) || (a > b)) << "\n";

    // true && true = true
    cout << ((a == 5) || (a < b)) << "\n";

    return 0;
}