#include <iostream>
using namespace std;

void swap(int array[], int a, int b){
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

int partition(int array[], int l, int r){
    int pivot = array[r];
    int i = l-1;
    for (int j=l; j<r; j++){
        if (array[j] < pivot){
            i++;
            swap(array, i, j);
        }
    }
    swap(array, i+1, r);
    return i+1;

}

void QuickSort(int array[], int l, int r){
    if (l<r){

        int pi = partition(array, l, r);        //gives pivot element index

        QuickSort(array, l, pi-1);
        QuickSort(array, pi+1, r);
    }
}

int main(){
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements : ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    QuickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}