#include <iostream>
using namespace std;

const double PI = 3.1415926535897932384626433832795;

class Cylinder{     
    //Private by default
    public:
        //Members
        double base_radius = 1;
        double height = 1;

    public:
        //Methods
        double volume(){
            return PI * base_radius * height;
        }
};

int main(){
    Cylinder cy1;           //Called object
    cy1.base_radius = 10;
    cy1.height = 3;
    cout << "Volume: " << cy1.volume() << endl;
    cout << "Base radius: " << cy1.base_radius << endl;
    cout << "Height: " << cy1.height << endl;

    return 0;
} 