#include <iostream>
using namespace std;

void towerofHanoi(int n, char src, char dest, char helper){             //n - no. of item, src - source, dest - destination, helper rod
    if (n==0){      //base case
        return;
    }
    towerofHanoi(n-1, src, helper, dest);           //helper as destination & dest as helper rod
    cout << "Move from " << src << " to " << dest << endl;
    towerofHanoi(n-1, helper, dest, src);           //helper as source & source as helper rod
}

int main(){

    towerofHanoi(3, 'A', 'C', 'B');
    return 0;
}