#include <iostream>
using namespace std;

void swap(int array[], int i, int j){
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

void dnfSort(int array[], int n){
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if(array[mid] == 0){
            swap(array, low, mid);
            low++;
            mid++;
        }
        else if(array[mid] == 1){
            mid++;
        }
        else{   //2
            swap(array, mid, high);
            high --;
        }
    }
}

int main(){
    int arr[] = {1,0,2,1,0,1,2,1,2};

    dnfSort(arr, 9);

    for(int i=0; i<9; i++){
        cout << arr[i];
    }
    return 0;
}