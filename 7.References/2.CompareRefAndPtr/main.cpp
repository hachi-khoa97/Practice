#include <iostream>
using namespace std;

int main(){
    double double_value = 12.34;
    double &ref_double_value = double_value;    //reference to double_value
    double *p_double_value = &double_value;     //pointer to double_value

    //Reading
    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;
    cout << "============================================" << endl;
    
    //Writing throught ptr
    *p_double_value = 15.44;
    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;
    cout << "============================================" << endl;

    //Writing through reference
    ref_double_value = 18.84;
    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;
    cout << "============================================" << endl;

    //Try to ref other address
    double other_double = 2.01;
    // ref_double_value = other_double;
    // cout << "double_value: " << double_value << endl;
    // cout << "ref_double_value: " << ref_double_value << endl;
    // cout << "p_double_value: " << p_double_value << endl;
    // cout << "*p_double_value: " << *p_double_value << endl;
    // cout << "============================================" << endl;
    p_double_value = &other_double;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;
    cout << "============================================" << endl;

    *p_double_value = 11.123;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;
    cout << "============================================" << endl;

    return 0; 
}
 