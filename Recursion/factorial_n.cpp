#include <iostream>
using namespace std;

int factorial(int n){
    if (n==1){          //or (n==0)
        return 1;
    }
    int prevFactorial = factorial(n-1);
    return n*prevFactorial;
}

int main(){
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}