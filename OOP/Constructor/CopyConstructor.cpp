#include<iostream>
using namespace std;

class Field{
    private:
        double length;
        double width;

    public:
        Field(double len, double wid)
            :length{len},width{wid}{}

        Field(const Field& obj)
            :length{obj.length},width{obj.width}{}

        
            double calculateArea(){
                return length * width;
            }
};

int main(){



    return 0;
}