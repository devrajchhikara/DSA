#include <iostream>
using namespace std;

int main(){
    int n,m;            //Row,Column
    cin >> n >> m;
    int arr[n][m];

    //INPUT
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    //OUTPUT
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}