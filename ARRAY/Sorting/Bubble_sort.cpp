#include <iostream>
using namespace std;

int main(){
    cout << "Enter array size : ";
    int n;
    int arr[n];
    cin >> n;
    cout << "Enter your unsorted array >> ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    //BUBBLE SORTING
    int counter = 1;
    while (counter < n){
        for (int i=0; i<n-counter; i++){
            if (arr[i] > arr[i+1]){
                int temp = arr[i];
                arr [i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter ++;
    }


    cout << "Sorted array >> ";
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}