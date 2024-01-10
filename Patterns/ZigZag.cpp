#include <iostream>
using namespace std;

int main(){
    cout << "Enter no. of zig zag length >> ";
    int num;
    cin >> num;

    for (int i=1; i<=3; i++){
        for (int j=1; j<=num; j++){
            if ((i+j)%4==0 || (i==2 && j%4==0)){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}