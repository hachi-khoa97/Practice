#include <iostream>
using namespace std;

int main(){
    //Declare and initialize poitner
    int *p; 
    int number = 3;
    p = &number;
    cout << "p = " << p << endl;
    cout << "&p = " << &p << endl;
    cout << "*p = " << *p << endl; 

    // int *p;             //Will init with nullptr
    // double *p_fraction;
    // int *p1 = NULL;
    // double *p_fraction1 = NULL;

    //Size of pointer depends on OS 32-bit(4bytes) or 64-bit (8bytes)
    // cout << "sizeof(int): " << sizeof(int) << endl;
    // cout << "sizeof(int*): " << sizeof(int*) << endl;
    // cout << "sizeof(double): " << sizeof(double) << endl;
    // cout << "sizeof(double*): " << sizeof(double*) << endl;
    // cout << "sizeof(p): " << sizeof(p) << endl;
    // cout << "sizeof(p_fraction): " << sizeof(p_fraction) << endl;
    // cout << endl;

    // int *p2, value1;
    // cout << "sizeof(p2): " << sizeof(p2) << endl;           //Pointer
    // cout << "sizeof(value1): " << sizeof(value1) << endl;   //Not a pointer
    // cout << endl;

    //Init ptr and assign data
    //Note that ptr store address of the variable
    // int var = 43;
    // int *p_var = &var;
    // cout << "var = " << var << endl;
    // cout << "p_var(Address in memory) = " << p_var << endl; 
    // cout << "*p_var = " << *p_var << endl; 
    // cout << endl;

    //Modify address store in ptr
    // int var1 = 44;
    // p_var = &var1;
    // cout << "var1 = " << var1 << endl;
    // cout << "p_var(Modified) = " << p_var << endl; 
    // cout << "*p_var = " << *p_var << endl; 

    //Dereference a ptr
    // int *p = NULL;
    // int data = 56;
    // p = &data;
    // cout << "Value: " << *p << endl;
    return 0; 
}
 