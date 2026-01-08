#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

int main(){
    Distance d;
    Distance* ptr = &d;

    cin >> (*ptr).feet;
    cin >> (*ptr).inch;
    
    return 0;
}