#include<iostream>
using namespace std;

class Man{
    protected:
        int age;
};

class Man1 : public Man {
    public:
        void displayAge(int a){
            age = a;
            cout << age << "\n";
        }
};
int main(){

    int age;

    Man1 man1;

    cin >> age;

    man1.displayAge(age);

    return 0;
}