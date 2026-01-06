
#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        if(i == 2)
        break;
        for (int j = 1; j <= 5; j++) {
            if (i == 2)
                break;
            cout << "i = " << i << ", j = " << j << "\n";
        }
    }

    return 0;
}