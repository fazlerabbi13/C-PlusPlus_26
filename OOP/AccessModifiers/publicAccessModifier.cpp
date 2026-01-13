#include<iostream>
using namespace std;

class Man{
    public:
        int age;

    void displayAge(){
        cout << age << "\n";
    }
};

int main(){

    Man obj1;
    cin >> obj1.age;

    obj1.displayAge();

    return 0;
}