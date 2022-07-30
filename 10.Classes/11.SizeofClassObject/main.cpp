#include <iostream>
#include <string_view>
using namespace std;

class Dog{     
    public:
        int *p_age;
    public:
        Dog() = default;
};


int main(){
    Dog dog1;
    cout << "sizeof(size_t): " << sizeof(size_t) << endl;
    cout << "sizeof(int*): " << sizeof(int*) << endl;
    cout << "sizeof(p_age): " << sizeof(dog1.p_age) << endl;
    cout << "sizeof(Dog): " << sizeof(Dog) << endl;

    string name = "Hanachi XXX";
    cout << "sizeof(name): " << sizeof(name) << endl;

    return 0;
} 