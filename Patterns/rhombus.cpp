#include <iostream>
using namespace std;

int main(){
    cout << "Enter no. of rows for rhombus >> ";
    int num;
    cin >> num;

    for (int i=1; i<=num; i++){
        for (int j=1; j<=num-i; j++){
            cout << "  ";
        }
        for (int j=1; j<=num; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}