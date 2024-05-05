#include <iostream>
using namespace std;

#define n 100

class stack{

    int* arr;
    int top;

    public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        if(top == n-1){
            cout << "Stack overflow" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop(){
        if(top == -1){
            cout << "No elements to pop" << endl;
            return;
        }

        top--;
    }

    void Top(){
        if(top == -1){
            cout << "No elements in stack" << endl;
            return;
        }
        cout << arr[top] << endl;
    }

    bool isempty(){
        return (top == -1);
    }
};

int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.Top();
    cout << st.isempty() << endl;
    st.push(4);
    st.Top();
    st.pop();
    st.pop();
    st.Top();
    st.pop();
    st.pop();
    st.pop();
    cout << st.isempty() << endl;
    st.Top();
    return 0;
}