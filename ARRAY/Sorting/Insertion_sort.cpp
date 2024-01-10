#include <iostream>
using namespace std;

int main(){
    cout << "Enter array size : ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter elements >> ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    for (int i=1; i<n; i++){            //Loop started from 2nd element!
        int current = arr[i];           //current iteration element stored in a variable
        int j = i-1;                    //prev. no.

        while (arr[j] > current && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = current;
    }
    cout << "SORTED ARRAY - ";
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}