#include<iostream>
using namespace std;

class Man{
    private:
        int age;

    public:
        void displayAge(int a){
            age = a;
            cout << age << "\n";
        }
};
int main(){
    int age;

    Man obj1;

    cin >> age;

    obj1.displayAge(age);

    return 0;
}