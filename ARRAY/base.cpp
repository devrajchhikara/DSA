#include <iostream>
using namespace std;

int main(){
    // first way
    int arr[4];
    arr[0] = 3;
    arr[1] = 7;
    arr[2] = 6;
    arr[4] = 9;

    //second way
    int arr1[4] = {2,4,6,8};

    //third (user input)
    int n;
    cout << "Enter third array size : ";
    cin >> n;
    int arr2[n];
    for (int i=0; i<n; i++){
        cin >> arr2[i];
    }

    //output for arr,arr1,arr2

    cout << arr[2] << " " << arr1[2] << " " << arr2[0] << endl;

    return 0;
}