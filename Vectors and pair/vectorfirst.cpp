#include <iostream>
#include <vector>
#include <algorithm>    //to use sort
using namespace std;

int main(){
    //initializing
    vector <int> v;

    v.push_back(1); //add element
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    //for output
    for (int i=0; i < v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;

    //another way
    vector <int>::iterator it;  //itialising an iterator 'it'

    for (it = v.begin(); it!=v.end(); it++){
        cout << *it << " "; //using * as it's a pointer
    }cout << endl;

    //another

    for (auto element: v){
        cout << element << " ";
    }cout << endl;

    //removing elements
    v.pop_back();

    //declaring another vector
    vector <int> v2(3, 50); //50 50 50
    for (auto i: v2){
        cout << i << " ";
    }cout << endl;

    swap(v, v2);        //v2 values in v & v values in v2
    for (auto i: v2){
        cout << i << " ";
    }cout << endl;


    v.push_back(5); //50 50 50 5

    sort(v.begin(), v.end());
    for (auto i: v){
        cout << i << " ";
    }cout << endl;  // 5 50 50 50

    return 0;
}
