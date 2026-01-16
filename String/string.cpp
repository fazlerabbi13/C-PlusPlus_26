#include <iostream>
using namespace std;

int main()
{

    // char str[100];
    // string str1;

    // cin >> str;
    // cin.get(str, 100);
    // getline(cin, str1);

    // cout << str1 << "\n";

    // occurence finding
    // string str2 = "Hello world! This is noisy world.";

    // size_t frist_occurence = str2.find("world");

    // size_t last_occurrence = str2.rfind("world");

    // if(frist_occurence != string::npos){
    //     cout << frist_occurence << "\n";
    //     cout << last_occurrence << "\n";
    // }else{
    //     cout << "'world' is not found." << "\n";
    // }


    // some built in function in string 
    // string str3 = "Hello, World!";

    // cout << "before: " << str3 << "\n";

    // str3.append("This is Fazle Rabbi ");

    // str3.insert(6, " of programming ");

    // str3.erase(5, 9);

    // str3.replace(7, 3, "Programmer");

    // cout << "after: " << str3 << "\n";

    // Compare Strings Alphabetically

    string str4 = "Hello";
    string str7 = "Hello";
    string str5 = "Programmers World";
    string str6 = "c++ Programming";


    cout << str4.compare(str5) << "\n";
    cout << str4.compare(str7) << "\n";
    cout << str5.compare(str4) << "\n";



    return 0;
}