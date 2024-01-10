#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "Enter your no. : ";
    int n;
    cin >> n;
    int number = n;
    int sum = 0;
    while (n>0){
        int lastdigit = n%10;
        sum += pow(lastdigit, 3);
        n = n/10;
    }

    if (sum == number){
        cout << "Armstrong number";
    }
    else {
        cout << "Not armstrong";
    }
    cout << endl;
    return 0;
}