#include <iostream>
#include <string_view>
using namespace std;

class Dog{     
    public:
        Dog() = default;
        Dog(string_view name_param, string_view breed_param, int age_param);

        ~Dog();

        Dog* p_set_dog_name(string_view name);
        Dog* p_set_breed(string_view breed);
        Dog* p_set_age(int age);
        
        Dog& set_dog_name(string_view name);
        Dog& set_breed(string_view breed);
        Dog& set_age(int age);
        void print_info();
    
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
    cout << "Constructor called with name "<< name << " at " << this << endl;
}

Dog::~Dog(){
    cout << "Destructor called with name "<< name << " at " << this << endl;
    delete p_age;
}
//====================================================================
// Call using pointer
Dog* Dog::p_set_dog_name(string_view name){
    this->name = name;
    return this;
}

Dog* Dog::p_set_breed(string_view breed){
    this->breed = breed;
    return this;
}

Dog* Dog::p_set_age(int age){
    *(this->p_age) = age;
    return this;
}
//====================================================================
//Call using reference
Dog& Dog::set_dog_name(string_view name){
    this->name = name;
    return *this;
}

Dog& Dog::set_breed(string_view breed){
    this->breed = breed;
    return *this;
}

Dog& Dog::set_age(int age){
    *(this->p_age) = age;
    return *this;
}

void Dog::print_info(){
    cout << "Dog (" << this << ") : [name: " << name << " breed: " << breed << " age: " << *p_age << "]" << endl;
}
int main(){
    Dog dog1("Mot","corgi",2);
    dog1.print_info();
    dog1.set_dog_name("Hachi").set_breed("Akita").set_age(12);
    dog1.print_info();
    cout << endl;

    cout << "================Using pointer class================" << endl;
    Dog *dog2 = new Dog("Hai","corgi",2);
    dog2->p_set_dog_name("Hachi")->p_set_breed("Akita")->p_set_age(12);
    dog2->print_info();
    cout << endl;

    cout << "================Using reference================" << endl;
    Dog dog3("Ba","asdqwe",333);
    dog1.set_dog_name("qwasd").set_breed("wwww").set_age(14);
    dog1.print_info();

    cout << "Done" << endl;
    return 0;
} 