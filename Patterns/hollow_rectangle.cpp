#include <iostream>
using namespace std;

int main(){
    int row, col;
    cout << "Enter Rows & Columns >> ";
    cin >> row >> col;

    for (int i=1; i<=row; i++){
        for (int j=1; j<=col; j++){
            if (i==1 || i==row){
                cout << "x" << " ";
            }
            else if (j==1 || j==col){
                cout << "x" << " ";
            }
            else {
                cout << " " << " ";
            }
        }
        cout << endl;
    }
    return 0;
}