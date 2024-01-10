#include <iostream>
using namespace std;

int fact(int n){
    
    int factorial = 1;
    for (int i=2; i<=n; i++){
        factorial = factorial*i;
    }
    return factorial;
}

int main(){
    cout << "Enter your number >> ";
    int num;
    cin >> num;
    cout << "Factorial of your number is :: ";

    int ans = fact(num);
    
    cout << ans << endl;
    return 0;
}