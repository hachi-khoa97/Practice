#include "cylinder.h"

Cylinder::Cylinder(double rad_param, double hei_param){
            base_radius = rad_param;
            height = hei_param;
}
double Cylinder::volume(){
    return PI * base_radius * base_radius * height;
}

double Cylinder::get_base_radius(){
    return base_radius;
}
double Cylinder::get_height(){
    return height;
}
void Cylinder::set_base_radius(double rad_param){
    base_radius = rad_param;
}
void Cylinder::set_height(double hei_param){
    height = hei_param;
}