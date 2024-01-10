#include <iostream>
using namespace std;

int main(){
    cout << "Enter no. of rows for palendromic sequence pattern >> ";
    int num;
    cin >> num;

    for (int i=1; i<=num; i++){
        for (int j=1; j<=num-i; j++){
            cout << "  ";
        }
        for (int j=i; j>=1; j--){
            cout << j << " ";
        }
        for (int j=2; j<=i; j++){
            if (i==1){
                break;
            }
            else {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}