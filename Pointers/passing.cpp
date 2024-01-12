#include <iostream>
using namespace std;

void increment(int *a){
    *a = *a + 1;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    //incrementing a
    int a = 2;
    int *aptr = &a;
    increment(aptr);
    cout << a << endl;  //3
    //swapping a - b
    int b = 2;
    int *bptr = &b;
    swap(aptr, bptr);
    cout << a << " " << b << endl;
    return 0;
}