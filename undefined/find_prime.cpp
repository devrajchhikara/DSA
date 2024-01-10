#include <iostream>

using namespace std;

int main(){
    int a,n;
    cout << "Enter your number (n): ";
    cin >> n;
    a = 2;
    while ( a < n ){
        if ( n%a ==0 ){
            cout << "Not prime";
            return 0;
        }
    else {
        a = a + 1;
    }
    cout << "PRIME";
    return 0;
    }
}