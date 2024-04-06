#include <iostream>
using namespace std;

class mobile{
    public:
    string brand;
    int price;
    string color;
    int ram;

    void setInfo(string b, int p, string c, int r){
        brand = b;
        price = p;
        color = c;
        ram = r;
    }
    //default constructor
    mobile(){
        cout << "Default constructor" << endl;
    }
    //copy constructor
    mobile(mobile &a){
        brand = a.brand;
        price = a.price;
        color = a.color;
        ram = a.ram;
    }

    bool operator == (mobile &a){
        if(brand == a.brand && price == a.price && color == a.color && ram == a.ram){
            return true;
        }
        return false;
    }
};

int main(){
    mobile a;
    a.setInfo("samsung", 50000, "white", 8);

    mobile b = a;

    if(b == a){
        cout << "Same" << endl;
    }
    else {
        cout << "Not same" << endl;
    }
    return 0;
}