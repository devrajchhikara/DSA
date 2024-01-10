#include <iostream>
#include <climits>
using namespace std;

int main(){
    cout << "Enter array size - ";
    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int max = INT_MIN;
    int min = INT_MAX;

    for (int i=0; i<n; i++){                        //can also use maxNo. = max(maxNo.,arr[i]);
        if (arr[i] > max){
            max = arr[i];
        }
        if (arr[i] < min){
            min = arr[i];
        }
    }
    cout << "MAX & MIN are - " << max << " " << min << endl;
    return 0;
}