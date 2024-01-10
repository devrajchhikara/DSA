#include <iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter array size ? ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements - ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int max = 0;
    for (int i=0; i<n-1; i++){                //Not giving desired output
        if (arr[i] < arr[i+1]){
            max = arr[i+1];
        }
        else if(arr[i] > arr[i+1]){
            max = arr[i];
        }
    }

    cout << "MAX = " << max << endl;
    return 0;
}