#include <iostream>
using namespace std;

int BinarySearch(int array[], int n, int key){
    int s = 0;
    int e = n;

    while (s<=e){
        int mid = (s+e)/2;

        if (array[mid] == key){
            return mid;
        }
        else if(array[mid] > key){
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }

    return -1;

}

int main(){
    cout << "Enter array size : ";
    int n;
    cin >> n;

    int arr[n];
    cout << "Enter array elements (sorted) >> ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search :: ";
    cin >> key;

    cout << BinarySearch(arr, n, key) << endl;
    return 0;
}