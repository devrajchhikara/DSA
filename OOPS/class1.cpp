#include <iostream>
using namespace std;

class student{
    string name;
    int age;
    bool gender;
    public:
    //constructor
    student(string s, int a, bool g){
        name = s;
        age = a;
        gender = g;
    }

    //print all output
    void getAll(){
        cout << name << endl;
        cout << age << endl;
        if (gender == 0){
            cout << "Male" << endl;
        }
        else {
           cout << "Female" << endl;
        }
    }
};

int main(){
    student s1("Arjun", 21, 0);
    student s2("Karan", 20, 0);
    student s3("Anjali", 20, 1);

    s1.getAll();
    s2.getAll();
    s3.getAll();
    return 0;
}