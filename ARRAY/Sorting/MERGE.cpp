#include <iostream>
using namespace std;

void Merge(int array[], int l, int mid, int r){

    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2];

    for (int i=0; i<n1; i++){
        a[i] = array[l+i];
    }
    for (int i=0; i<n2; i++){
        b[i] = array[mid+i+1];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2){
        if (a[i] < b[j]){
            array[k] = a[i];
            k++; i++;
        }
        if (a[i] > b[j]){
            array[k] = b[j];
            k++; j++;
        }
    }

    while (i<n1){
        array[k] = a[i];
        k++; i++;
    }
    while (j<n2){
        array[k] = b[j];
        k++; j++;
    }
}

void MergeSort(int array[], int l, int r){
    if (l < r){
        int mid = (l+r)/2;
        MergeSort(array, l, mid);
        MergeSort(array, mid+1, r);

        Merge(array, l, mid, r);
    }
}

int main(){
    int n;
    cout << "Array size : ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    MergeSort(arr, 0, n-1);

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}