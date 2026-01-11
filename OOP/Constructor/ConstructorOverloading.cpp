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
            length = Len;
            breath = bre;
        }

        Field(double len){
            length = Len;
            breath = 8.2;
        }

        double calculateArea(){
            return length * breath;
        }
};

int main(){
    Field field1, feild2(5.2,8.2), feild3(6.0);
    
    return 0;
}