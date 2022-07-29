#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"
class Cylinder{     
    //Private by default
    private:
        //Members
        double base_radius = 1;
        double height = 1;

    public:
        //Contructor (Must be public)
        Cylinder() = default;
        
        Cylinder(double rad_param, double hei_param);
        //Methods
        double volume();

        //Setter and getter
        double get_base_radius();
        double get_height();
        void set_base_radius(double rad_param);
        void set_height(double hei_param);
};
#endif