#include <iostream>
using namespace std;


int main(){
    cout << "Enter the size of new array : ";
    int n;
    cin >> n;
    
    //array input
    int arr[n];
    cout << "Enter the elements of array >> ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }


    //selection sort
    for (int i=0; i < n-1; i++){
        for (int j=i+1; j < n; j++){
            if (arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //sorted array
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}