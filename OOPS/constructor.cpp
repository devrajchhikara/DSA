#include <iostream>
using namespace std;

class car{
    public:
    string color;
    int year;
    int price;
    bool fuel;  //0-petrol, 1-diesel

    //parameterised constructor
    car(string s, int y, int p, bool f){
        cout << "Parameterised constructor";
        color = s;
        year = y;
        price = p;
        fuel = f;
    }

    //default constructor
    car(){
        cout << "Default constructor";
    }

    //copy constructor
    car(car &a){
        color = a.color;
        year = a.year;
        fuel = a.fuel;
        price = a.price;
    }

    //Destructor
    ~car(){
        cout << "Destructor called" << endl;
    }

    void printInfo(){
        cout << "Copy constructor" << endl;
        cout << color << endl;
        cout << year << endl;
        cout << price << endl;
        cout << fuel << endl;
    }
};

int main(){
    car a("Red", 1995, 50000, 0);
    cout << endl;

    car();
    cout << endl;

    
    car b = a;
    b.printInfo();
    
    return 0;
}