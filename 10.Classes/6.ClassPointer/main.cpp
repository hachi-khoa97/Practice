#include <iostream>
#include "cylinder.h"
using namespace std;

int main(){
    Cylinder cy1(10.5,10.5);           //Called object, stored on heap. Parameter store on stack
    
    //Manage stack object through pointer
    Cylinder *p_cy1 = &cy1;
    // cout << "Volume: " << (*p_cy1).volume() << endl;
    cout << "Volume cy1: " << p_cy1->volume() << endl;

    Cylinder *p_cy2 = new Cylinder(100,2);
    cout << "Volume cy2: " << p_cy2->volume() << endl;
    cout << "Radius cy2: " << p_cy2->get_base_radius() << endl;
    cout << "Height cy2: " << p_cy2->get_height() << endl;
    delete p_cy2;
    return 0;
} 