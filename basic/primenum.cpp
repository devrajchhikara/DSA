#include <iostream>
using namespace std;

int main(){
    cout << "Enter number >> ";
    int num;
    cin >> num;
    int i;
    for (i=2;i<num;i++){
        if (num%i == 0){
            cout << "Not prime";
            break;
        }
    }
    if (i==num){
        cout << "Prime";
    }
    cout << endl;
    return 0;
}