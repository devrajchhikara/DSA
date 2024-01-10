#include <iostream>
using namespace std;

int main(){
    cout << "Enter no. of rows for floyd's triangle >> ";
    int num;
    cin >> num;

    int val = 1;
    for (int i=1; i<=num; i++){
        for (int j=1; j<=i; j++){
            cout << val << " ";
            val++;
        }
        cout << endl;
    }
    return 0;
}