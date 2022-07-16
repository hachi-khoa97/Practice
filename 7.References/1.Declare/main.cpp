#include <iostream>
using namespace std;

int main(){
    int int_data = 33;
    double double_data = 55;

    //References
    int &ref_int_data = int_data;
    double &ref_double_data = double_data; 

    //Print out
    cout << "int_data: " << int_data;
    cout << "\t&int_data:" << &int_data << endl;
    cout << "double_data: " << double_data;
    cout << "\t&double_data:" << &double_data << endl;
    cout << "ref_int_data: " << ref_int_data;
    cout << "\t&ref_int_data: " << &ref_int_data << endl;
    cout << "ref_double_data: " << ref_double_data;
    cout << "\t&ref_double_data: " << &ref_double_data <<endl;
    cout << "============================================" << endl;
    //Modified original variable
    // int_data = 111;
    // double_data = 999;
    // //Print out
    // cout << "int_data: " << int_data;
    // cout << "\t&int_data:" << &int_data << endl;
    // cout << "double_data: " << double_data;
    // cout << "\t&double_data:" << &double_data << endl;
    // cout << endl;
    // cout << "ref_int_data: " << ref_int_data;
    // cout << "\t&ref_int_data: " << &ref_int_data << endl;
    // cout << "ref_double_data: " << ref_double_data;
    // cout << "\t&ref_double_data: " << &ref_double_data <<endl;

    //Modified through ref
    ref_int_data = 20;
    ref_double_data = 99.12;
    cout << "int_data: " << int_data;
    cout << "\t&int_data:" << &int_data << endl;
    cout << "double_data: " << double_data;
    cout << "\t&double_data:" << &double_data << endl;
    cout << "ref_int_data: " << ref_int_data;
    cout << "\t&ref_int_data: " << &ref_int_data << endl;
    cout << "ref_double_data: " << ref_double_data;
    cout << "\t&ref_double_data: " << &ref_double_data <<endl;
    return 0; 
}
 