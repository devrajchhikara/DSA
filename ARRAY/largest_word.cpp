#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr, n);
    cin.ignore();

    int i=0;
    int curr_len = 0;
    int max_len = 0;

    int st = 0, maxst = 0;
    while (1){
        if (arr[i] == ' ' || arr[i] == '\0'){
            if (curr_len > max_len){
                max_len = curr_len;
                maxst = st;
            }
            curr_len = 0;
            st = i+1;
        }
        else
        curr_len++;

        if (arr[i] == '\0'){
            break;
        }
        i++;
    }
    cout << max_len << endl;

    return 0;
}