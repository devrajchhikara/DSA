#include <iostream>
using namespace std;

int main(){
    cout << "Enter A & B >> ";
    int a, b;
    cin >> a;
    cin >> b;

    for (int num = a; num<b; num++){
        int i;
        for (i = 2; i<num; i++){
            if (num%i == 0){
                break;
            }
        }
        if (i==num){
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;

}