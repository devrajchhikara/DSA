#include <iostream>
using namespace std;

void decreasing(int n){
    if (n==1){
        cout << "1" << endl;
        return;
    }
    cout << n << endl;
    decreasing(n-1);
}

void increasing(int n){
    if (n==1){
        cout << "1" << endl;
        return;
    }
    increasing(n-1);
    cout << n << endl;
}

int main(){
    int n;
    cin >> n;

    cout << "Increasing order :" << endl;
    increasing(n);
    cout << "Decreasing order :" << endl;
    decreasing(n);
    return 0;
}