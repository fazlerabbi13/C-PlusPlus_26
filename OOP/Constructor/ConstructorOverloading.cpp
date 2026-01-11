#include<iostream>
using namespace std;

class Field{
    private:
        double length;
        double breath;

    public:
        Field(){
            length = 5.5;
            breath = 6.5;
        }

        Field(double len, double bre){
            length = len;
            breath = bre;
        }

        Field(double len){
            length = len;
            breath = 8.2;
        }

        double calculateArea(){
            return length * breath;
        }
};

int main(){
    Field field1, feild2(5.2,8.2), feild3(6.0);

    cout << field1.calculateArea() << "\n";
    cout << feild2.calculateArea() << "\n";
    cout << feild3.calculateArea() << "\n";

    return 0;
}