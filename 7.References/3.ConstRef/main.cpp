#include <iostream>
using namespace std;

int main(){
    cout << "Non const ref: " << endl;
    int age = 25;
    int &ref_age = age;
    // // const int &ref_age = age;       //Will get error since const

    // cout << "Age: " << age << endl;
    // cout << "ref_age: " << ref_age << endl;

    // //Modify var throught ref
    // cout << "Modify by ref" << endl;
    // ref_age += 5;
    // cout << "Age: " << age << endl;
    // cout << "ref_age: " << ref_age << endl;


    //Simulating ref behavior with pointers
    // const int * const p_age = &age;
    // *p_age = 45;
    return 0; 
}
 