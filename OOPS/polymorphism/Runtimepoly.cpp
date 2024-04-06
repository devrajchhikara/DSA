#include <bits/stdc++.h>
using namespace std;

class base{
    public:
    virtual void print(){
        cout << "This is the base class print function." << endl;
    }
    virtual void display(){
        cout << "This is the base class display function." << endl;
    }
};

class derived : public base{
    public:
    void print(){
        cout << "This is the derived class print function." << endl;
    }
    void display(){
        cout << "This is the derived class display function." << endl;
    }
};

int32_t main(){
    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr -> print();
    baseptr -> display();
    cout << endl;
    return 0;
}