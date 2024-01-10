#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int a = 2;
    int s = 0; //starting point
    int e = n; //ending point

    while(s <= e){
        int mid = (s+e)/a;

        if (arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter no. of elements in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array >> ";
    
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter number to be searched = ";
    cin >> key;

    cout << BinarySearch(arr, n, key) << endl;
    return 0;

}