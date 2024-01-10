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
    //SELECTION SORTING
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted array >> ";
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}