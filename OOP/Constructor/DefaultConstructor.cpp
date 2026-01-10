#include<iostream>
using namespace std;

class Field {
    private:
        double length;
        double width;

    public:
        Field( double Len, double wid)
            : length{Len},width{wid}{

            }
        
        double calculate_area(){
            return length * width;
        }
};

int main(){
    // Field field1(10.5, 8.6);

    // cout << "Area of Field 1: " << field1.calculate_area() << "\n";

    return 0;
}