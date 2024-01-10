#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = 2;                    //will store the max arithmetic subarray length till now
    int pd = arr[1] - arr[0];       //previous common difference
    int j = 2;                      //iteration, from 2 bcs 1&0 pd already decl. -- now we need to arr[2] - arr[1];
    int current = 2;                //Current arithmetic subarray length

    while (j<n){
        if (pd == arr[j] - arr[j-1]){
            current++;
        }
        else {
            pd == arr[j] - arr[j-1];
            current = 2;
        }
        
        ans = max(ans, current);
        j++;
    }

    cout << ans << endl;

    return 0;
}