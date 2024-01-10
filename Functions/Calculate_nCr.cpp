#include <iostream>
using namespace std;

int fact(int num){
    int factorial = 1;
    for (int i=2; i<=num; i++){
        factorial = factorial*i;
    }
    return factorial;
}

int main(){
    cout << "Enter value of n & r >> ";
    int n, r;        //n ≥ r ≥ 0
    cin >> n >> r;

    //nCr = (n!)/((n-r)! * r!)

    int a = fact(n);
    int b = fact(n-r);
    int c = fact(r);

    int ans = a/(b*c);
    cout << ans << endl;
    return 0; 

}