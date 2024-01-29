#include <iostream>
using namespace std;

string removeDP(string s){
    if (s.length() == 0){
        return "";
    }

    char ch = s[0];         //storing first character of string in ch
    string ans = removeDP(s.substr(1));     //storing recursive ans for rest of the substring i.e. Index 1-(n-1) [n = length of string]
    if (ch == ans[0]){          //if first character matches it will only return rest of string
        return ans;
    }
    return (ch+ans);        //otherwise
}

int main(){

    cout << removeDP("aaabbbeeecdddd");
    return 0;
}       //only works for continuous duplication