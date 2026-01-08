#include<iostream>
using namespace std;

struct Person
{
    string first_name;
    string last_name;
    int age;
    float height;
    float salary;
};


int main(){
    Person p;

    cin >> p.first_name;
    cin >> p.last_name;
    cin >> p.age;
    cin >> p.height;
    cin >> p.salary;

    cout << ".................";
    
    cout << p.first_name << "\n";
    cout << p.last_name << "\n";
    cout << p.age << "\n";
    cout << p.height << "\n";
    cout << p.salary << "\n";

    return 0;
}