#include <iostream>
using namespace std;

int main(){
    cout << "Enter no. of rows of number pyramid >> ";
    int num;
    cin >> num;

    for (int i = 1; i<=num; i++){
        for (int j = 1; j<=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}