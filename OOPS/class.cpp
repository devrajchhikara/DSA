#include <iostream>
using namespace std;

class student{
    string name;
    public:
    int age;
    bool gender;

    void setName(string s){
        name = s;
    }
    void getName(){
        cout << name;
    }
};

int main(){
    student s1;
    s1.setName("Dev");
    s1.age = 20;
    s1.gender = 0;

    cout << "Student 1 :-" << endl;
    cout << "Name - ";
    s1.getName();
    cout << endl << "Age - " << s1.age << endl << "Gender - ";
    if (s1.gender == 0){
        cout << "Male";
    }
    else {
        cout << "Female";
    }
    return 0;
}