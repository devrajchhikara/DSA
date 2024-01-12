#include <iostream>
#include <string>
using namespace std;

int main(){
    string str3;
    getline(cin, str3);
    cout << str3 << endl;

    string str;
    cin >> str;
    cout << str << endl;

    string str1(5, 'n');
    cout << str1 << endl;

    string str2 = "Hello World!";
    cout << str2 << endl;

    return 0;
}