#include <iostream>
using namespace std;

const double PI = 3.1415926535897932384626433832795;

class Cylinder{     
    //Private by default
    private:
        //Members
        double base_radius = 1;
        double height = 1;

    public:
        //Contructor
        Cylinder(){
            base_radius = 2.0;
            height = 2.0;
        }
        
        Cylinder(double rad_param, double hei_param){
            base_radius = rad_param;
            height = hei_param;
        }

        //Methods
        double volume(){
            return PI * base_radius * base_radius * height;
        }
};

int main(){
    Cylinder cy1;           //Called object
    cout << "Volume cy1: " << cy1.volume() << endl;

    Cylinder cy2(10.5,23.4);
    cout << "Volume cy2: " << cy2.volume() << endl;

    return 0;
} 