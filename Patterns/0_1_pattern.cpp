#include <iostream>
using namespace std;

int main(){
    cout << "Enter no. of rows for 0 1 pattern >> ";
    int num;
    cin >> num;
    
    for (int i=1; i<=num; i++){
        for (int j=1; j<=i; j++){
            if ((i+j)%2 == 0){
                cout << "1 ";
            }
            else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}