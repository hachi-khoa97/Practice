#include <iostream>
#include "cylinder.h"
using namespace std;

int main(){
    Cylinder cy1(10.5,10.5);           //Called object, stored on heap
    cout << "Cy1 base_radius: " << cy1.get_base_radius() << endl;
    cout << "Cy1 height: " << cy1.get_height() << endl;
    cout << "Cy1 Volume: " << cy1.volume() << endl;
    return 0;
} 