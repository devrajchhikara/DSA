#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;
};

int main(){
    //declaring s1
    student s1;
    s1.name = "Jim";
    s1.age = 20;
    s1.gender = 0;      //0 - male, 1 - female
    // Output
    cout << "Student 1 :-" << endl;
    cout << "Name - " << s1.name << endl << "Age - " << s1.age << endl << "Gender - ";
    if (s1.gender == 0){
        cout << "Male";
    }
    else {
        cout << "Female";
    }
    return 0;
}