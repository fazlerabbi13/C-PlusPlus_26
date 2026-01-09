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

    Room room;

    room.length = 50.5;
    room.breath = 46.50;
    room.height = 40.12;
    
    return 0;
}