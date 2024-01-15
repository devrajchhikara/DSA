#include <iostream>
using namespace std;

bool Sorted(int arr[], int n){
    if (n==1){
        return true;
    }
    bool restArray = Sorted(arr+1, n-1);
    return (arr[0]<arr[1] && restArray);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cout << Sorted(arr, n) << endl;
    return 0;
}