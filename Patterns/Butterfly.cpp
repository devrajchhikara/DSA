#include <iostream>
using namespace std;

int main(){
    cout << "Enter number of rows for butterfly pattern >> ";
    int num;
    cin >> num;

    for (int i=1; i<=num; i++){
        for (int j=1; j<=i; j++){
            cout << "x ";
        }
        
        int space = num*2 - i*2;
        for (int j=1; j<=space; j++){
            cout << "  ";
        }

        for (int j=1; j<=i; j++){
            cout << "x ";
        }
        cout << endl;
    }

    for (int i=num; i>=1; i--){
        for (int j=i; j>=1; j--){
            cout << "x ";
        }
        
        int space = num*2 -i*2;
        for (int j=space; j>=1; j--){
            cout << "  ";
        }

        for (int j=i; j>=1; j--){
            cout << "x ";
        }
        cout << endl;
    }
    return 0;
}