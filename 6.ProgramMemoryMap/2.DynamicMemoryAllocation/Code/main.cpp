#include <iostream>
using namespace std;

int main(){

    //Writing to junk address
    // int *p_number;
    // *p_number = 55;     //Fail here

    // cout << "Writting into uninitialized pointer through dereference" << endl;
    // cout << "p_number: " << p_number << endl;
    // cout << "*p_number: " << *p_number << endl;

    //Dynamic Heap Memory
    int *p = new int;
    *p = 77;
    cout << "p: " << p << endl;
    cout << "*p:" << *p << endl;
    
    delete p;
    p = NULL;
    
    //Re-use
    p = new int(20);
    cout << "p now: " << p << endl;
    cout << "*p now:" << *p << endl;
    delete p;
    p = NULL;
    return 0; 
}
 