#include <iostream>
using namespace std;

void tell_age(int &age){
    ++age;       //Remeber to use dereference
    cout << "Age in function: " << age << " with address: "<< &age << endl;
}
int main(){
    int age = 23;   //Local
    cout << "Age be4: " << age << " with address: "<< &age << endl;
    tell_age(age);  //Only need to pass the variable since the tell_age is holding reference to age variable
    cout << "Age after: " << age << " with address: "<< &age << endl;
} 