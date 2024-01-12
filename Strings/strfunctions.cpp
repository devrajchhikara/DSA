#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    //Append
    string s1 = "fam";
    string s2 = "ily";
    cout << s1 + s2 << endl;
    s1.append(s2);
    cout << s1 << endl;

    //Charater accessing
    cout << s1[1] << endl;  //a
    //compare
    s1 = "abc";
    s2 = "xyz";
    cout << s2.compare(s1) << endl;     //+ve if s2>s1, -ve if s1>s2, 0 if s1 = s2

    s1.empty();      //checks if string is empty
    //erase
    string str = "nincompoop";
    str.erase(3, 2);
    cout << str << endl;
    //find
    str = "nincompoop";
    cout << str.find("com") << endl;
    cout << str.find("poo") << endl;
    //insertion
    str.insert(2, "lol");
    cout << str << endl;
    //length
    cout << str.length() << endl;
    cout << str.size() << endl;

    //iteration
    for (int i = 0; i<str.length(); i++){
        cout << str[i] << endl;
    }
    str = "nincompoop";
    //Substring
    string s = str.substr(6, 4);
    cout << s << endl;

    //string to int
    string a = "786";
    int x = stoi(a);
    cout << x + 2 << endl;

    //int to string
    x = 786;
    cout << to_string(x) + "2" << endl;
    
    //sorting a string (#include <algorithm>)
    string n = "wthsafbhadfgashg";
    sort(n.begin(), n.end());
    cout << n << endl;
}