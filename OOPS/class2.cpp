#include <iostream>
using namespace std;

//using array to add values

class student{
    public:
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout << "Name - " << name << endl;
        cout << "Age - " << age << endl;
        cout << "Gender - " << gender << endl;
    }
};

int main(){
    int n;
    cout << "Enter student numbers - ";
    cin >> n;

    student arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i].name;
        cin >> arr[i].age;
        cin >> arr[i].gender;
    }

    for (int i=0; i<n; i++){
        arr[i].printInfo();
    }

    return 0;
}