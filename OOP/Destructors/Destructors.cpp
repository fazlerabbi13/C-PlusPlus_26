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
}

int main(){

    return 0;
}