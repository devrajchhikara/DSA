#include <iostream>
#include <algorithm>
using namespace std;

void countSort(int array[], int n){
    //max element
    int k = array[0];
    for(int i=0; i<n; i++){
        k = max(k,array[i]);
    }

    int count[10] = {0};
    for(int i=0; i<n; i++){
        count[array[i]]++;
    }

    for(int i=1; i<=k; i++){
        count[i] += count[i-1];
    }

    int output[n];
    for(int i = n-1; i>=0; i--){
        output[--count[array[i]]] = array[i];
    }

    for(int i=0; i<n; i++){
        array[i] = output[i];
    }
}

int main(){
    int n; cout << "Enter array size : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements >> ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    countSort(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}