#include <iostream>
#include <algorithm>
using namespace std;

bool check(int x, int y, int z){
    int a = max(x, max(y,z));
    int b, c;

    if (a == x){
        b = y;
        c = z;
    }
    else if (a == y){
        b = x;
        c = z;
    }
    else {
        b = x;
        c = y;
    }

    if (a*a == b*b + c*c){
        return true;
    }
    else {
        return false;
    } 
}

int main(){
    cout << "Enter your numbers : ";
    int x, y, z;
    cin >> x >> y >> z;

    if (check(x,y,z)){
        cout << "Pythagorean triplet" << endl;
    }
    else {
        cout << "Not a pythagorean triplet" << endl;
    }
    return 0;
}