#include<iostream>
using namespace std;

class Feild{
    private:
        double* length;
        double* height;

    public:

        Feild(double len = 2.5, double hgt = 5.0)
            :length{new double{len}},
            , height{new double{hgt}}{

            }

        Feild(const Feild& obj)
        : length{new double{*(obj.length)}}
        , height{new double{*(obj.height)}}{

        }

        void setLenght(double len){
            *length = len;
        }

        double calculateArea(){
            return length * height;
        }

        ~Feild(){
            delete length;
            delete height;
        }


};

int main(){
    Feild feild1(5.2, 2.3);

    Feild feild2 = feild1;

    feild2.setLenght(7.5);
    
    return 0;
}