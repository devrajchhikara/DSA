#include <iostream>
using namespace std;

int LinearSearch(int ar[], int n, int key){
    for (int i=0; i<n; i++){
        if (ar[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Array size : ";
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    } 

    int key;
    cout << "Enter element to be searched >> ";
    cin >> key;
    cout << LinearSearch(arr, n, key) << endl;
    return 0;
}