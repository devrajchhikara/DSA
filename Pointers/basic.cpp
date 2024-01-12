#include <iostream>
using namespace std;

int main(){
    int a = 10;
    cout << a << endl;

    int *aptr = &a;
    cout << aptr << endl;
    cout << *aptr << endl;

    *aptr = 20;
    cout << aptr << endl;

    int **dptr = &aptr;
    cout << *dptr << endl;
    cout << **dptr << endl;

    int *fptr;
    fptr = &a;
    cout << *fptr << endl;
    return 0;
}