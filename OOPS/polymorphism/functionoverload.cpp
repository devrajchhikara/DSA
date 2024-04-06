#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    void fun(){
        cout << "Function with no argument" << endl;
    }
    void fun(int x){
        cout << "Function with int argument" << endl;
    }
    void fun(double x){
        cout << "Function with double argument" << endl;
    }
};

int32_t main(){
    A obj;
    obj.fun();
    obj.fun(5);
    obj.fun(5.1);

    return 0;
}