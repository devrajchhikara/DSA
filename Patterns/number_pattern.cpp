#include <iostream>
using namespace std;

int main(){
    cout << "Enter no. of rows for number pattern(pyramid) >> ";
    int num;
    cin >> num;

    for (int i=1; i<=num; i++){
        for (int j=1; j<=num-i; j++){
            cout << " ";
        }
        for (int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}