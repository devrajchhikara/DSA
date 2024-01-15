#include <iostream>
using namespace std;

int power(int p, int n){
    if (n==1){
        return p;       //or return 1 if (n==0)
    }
    int prevPower = power(p, n-1);
    return p*prevPower;
}

int main(){
    int p, n;
    cin >> p >> n;  //p^n
    cout << power(p, n) << endl;
    return 0;
}