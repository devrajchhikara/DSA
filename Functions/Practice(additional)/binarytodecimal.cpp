#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
    int ans = 0;
    int x = 1;
    while (n>0){
        int lastdigit = n%10;
        ans = ans + lastdigit*x;
        x = x*2;
        n = n/10;
    }
    return ans;
}

int OctaltoDecimal(int n){
    int ans = 0;
    int x = 1;
    while (n>0){
        int lastdigit = n%10;
        ans = ans + lastdigit*x;
        x = x*8;
        n = n/10;
    }
    return ans;
}
//INCOMPLETE
int HexaDecimaltoDecimal(string n){
    
    int ans = 0;
    int x = 1;
    int s = n.size();

    for (int i = s-1; i>=0; i--){
        if (n[i] >= '0' && n[i] <= '9'){
            ans += x*(n[i]-'0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F'){
            ans += x*(n[i]-'A' + 10);
        }
        x *= 16;
    }

    return ans;
}

int DecimaltoBinary(int n){
    int x = 1;
    int ans = 0;
    while (x<n){
        x *= 2;
    }
    x /= 2;

}



int main(){
    cout << "Enter binary number >> ";
    string num;
    cin >> num;

    cout << HexaDecimaltoDecimal(num) << endl;
}