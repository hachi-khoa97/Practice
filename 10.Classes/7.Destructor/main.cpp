#include <iostream>
#include <string_view>
using namespace std;

class Dog{     
    public:
        Dog() = default;
        Dog(string_view name_param, string_view breed_param, int age_param);

        ~Dog();

    private:
        string name;
        string breed;
        int *p_age = nullptr;
};

Dog::Dog(string_view name_param, string_view breed_param, int age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int();
    *p_age = age_param;
    cout << "Constructor called" << endl;
}

Dog::~Dog(){
    cout << "Destructor called" << endl;
    delete p_age;
    name = "";
}

void test(){
    Dog m_corgi("A","corgi",3);
}

void test2(Dog dog_param){

}

void test3(){
    Dog *p_corgi = new Dog("A","corgi",3);

    delete p_corgi;         //Force destructor to be called
}


int main(){
    // Dog corgi("P","corgi",23);
    test3();
    cout << "Done" << endl;
    return 0;
} 