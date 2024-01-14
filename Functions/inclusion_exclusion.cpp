#include <iostream>
using namespace std;

int Divisible(int n, int a, int b){

    int C1 = n/a;
    int C2 = n/b;

    int C3 = n/(a*b);

    return C1+C2-C3;
}

int main(){

    int n , a , b;
    cin >>n>>a>>b;

    cout << Divisible(n,a,b) << endl;
    return 0;
}