#include<iostream>
using namespace std;

class Room{
    public:
        double length;
        double breath;
        double height;

        double calcute_area(){
            return length * breath;
        }
};

int main(){

    return 0;
}