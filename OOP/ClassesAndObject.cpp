#include<iostream>
using namespace std;

class Room{
    public:
        double length;
        double breath;
        double height;

        double calculate_area(){
            return length * breath;
        }

        double calculate_volume(){
            return length * breath * height;
        }
};

int main(){

    return 0;
}