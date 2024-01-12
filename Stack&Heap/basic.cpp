#include <iostream>
using namespace std;

int main(){
    int a = 10;     //stored in stack
    int *p = new int();  //allocates memory in heap
    *p = 10;

    delete(p);      //deallocate memory (but pointer remains at its position in heap)
    //reusing p
    p = new int[4];         //storing a array of size 4
    delete []p;         
    p = NULL;       //removes pointer

}