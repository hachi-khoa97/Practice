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
        //Contructor (Must be public)
        Cylinder() = default;
        
        Cylinder(double rad_param, double hei_param){
            base_radius = rad_param;
            height = hei_param;
        }

        //Methods
        double volume(){
            return PI * base_radius * base_radius * height;
        }

        //Setter and getter
        double get_base_radius(){
            return base_radius;
        }
        double get_height(){
            return height;
        }
        void set_base_radius(double rad_param){
            base_radius = rad_param;
        }
        void set_height(double hei_param){
            height = hei_param;
        }
};

int main(){
    Cylinder cy1(2,3);           //Called object, stored on stack
    cout << "Cy1 base_radius: " << cy1.get_base_radius() << endl;
    cout << "Cy1 height: " << cy1.get_height() << endl;
    cout << "Cy1 Volume: " << cy1.volume() << endl;

    cy1.set_base_radius(200);
    cy1.set_height(300);
    cout << "============Modify============" << endl;
    cout << "Cy1 base_radius: " << cy1.get_base_radius() << endl;
    cout << "Cy1 height: " << cy1.get_height() << endl;
    cout << "Cy1 Volume: " << cy1.volume() << endl;
    return 0;
} 