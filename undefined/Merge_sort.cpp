#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    //size of array(divided)
    int n1 = mid-l +1; 
    int n2 = r-mid;
    //temp arrays
    int a[n1];
    int b[n2];
    //filling values in temp arrays
    for (int i=0; i<n1; i++){
        a[i] = arr[l+i];
    }
    for (int i=0; i<n1; i++){
        a[i] = arr[l+i];
    }

    int i=0;
    int j=0;
    int k=l;
    while (i<n1 && j<n2){
        if (a[i]<b[j]){
            arr[k] = arr[i];
            k++; i++;
        }
        else{
            arr[k] = b[j];
            k++; j++;
        }
    }
    //case handle(pointer reaches last in one array)
    while (i<n1){
        arr[k] = a[i];
        k++; i++;
    }
    while (j<n2){
        arr[k] = b[j];
        k++; j++;
    }
}

void MergeSort(int arr[], int l, int r){

    if (l<r){
        int mid = (l+r)/2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid+1, r);

        merge(arr,l,mid,r);
    }
}

int main(){
    
    int arr[] = {3,6,2,1,9,7};
    MergeSort(arr, 0, 5);
    
    for (int i=0;i<6;i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}