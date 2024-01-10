#include <iostream>
using namespace std;

int fact(int num){
    int factorial = 1;
    for (int i=2; i<=num; i++){
        factorial = factorial*i;
    }
    return factorial;
}

int combination(int n, int r){
    int a = fact(n);
    int b = fact(n-r);
    int c = fact(r);
    int val = a/(b*c);
    return val;
}
int main(){
    cout << "Enter no. of rows >> ";
    int num;
    cin >> num;

    for (int i=0; i<num; i++){
        for (int j=0; j<=i; j++){
            cout << combination(i,j) << " ";
        }
        cout << endl;
    }
    return 0;
}



// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 