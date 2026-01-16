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

    string str3 = "Hello, World!";

    cout << "before: " << str3 << "\n";

    str3.append("This is Fazle Rabbi ");

    str3.insert(6, " of programming ");

    cout << "after: " << str3 << "\n";

    return 0;
}