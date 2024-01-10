#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int s){
    for (int i=0; i<n; i++){
        if (arr[i] == s){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array >> ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int s;
    cout << "Enter your search >> ";
    cin >> s;
    cout << linearSearch(arr,n,s)<<endl;
    
    return 0;
}