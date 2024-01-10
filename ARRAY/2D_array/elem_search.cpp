#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    //INPUT
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    
    int key;
    cout << "Enter key. to be searched > ";
    cin >> key;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (arr[i][j] == key){
                cout << "Element is present at " << i << " " << j;
            }
        }
    }
    cout << endl;
    return 0;
}