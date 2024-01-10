#include <iostream>
using namespace std;

void fib(int n){
    int a = 0;
    int b = 1;
    int nextTerm;

    for (int i=0; i<n; i++){
        cout << a << " ";
        nextTerm = a + b;
        
        a = b;
        b = nextTerm;
    }
    return;
}

int main(){
    cout << "Enter terms no. >> ";
    int num;
    cin >> num;

    fib(num);
    cout << endl;
    return 0;
}