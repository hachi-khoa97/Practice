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
    cout << "Constructor called with name "<< name << endl;
}

Dog::~Dog(){
    cout << "Destructor called with name "<< name << endl;
    delete p_age;
}

int main(){
    Dog dog1("Dog1","D1",1);
    Dog dog2("Dog2","D2",2);
    Dog dog3("Dog3","D3",3);
    Dog dog4("Dog4","D4",4);
    cout << "Done" << endl;
    return 0;
} 