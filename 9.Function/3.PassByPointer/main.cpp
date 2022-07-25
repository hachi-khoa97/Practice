#include <iostream>
using namespace std;

void tell_age(int *age){
    ++(*age);       //Remeber to use dereference
    cout << "Age in function: " << *age << " with address: "<< &age << endl;
}
int main(){
    int age = 23;   //Local
    cout << "Age be4: " << age << " with address: "<< &age << endl;
    tell_age(&age); //Passing the address of age variable since pointer contain address
    cout << "Age after: " << age << " with address: "<< &age << endl;
} 