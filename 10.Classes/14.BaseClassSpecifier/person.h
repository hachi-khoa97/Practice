#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <string_view>
using namespace std;

class Person{
    friend ostream& operator << (ostream& out, const Person &person);

    public:
        string m_full_name = "None";
    protected:
        int m_age = 0;
    private:
        string m_address = "None";

    public:
        Person() = default;
        Person(const string_view &full_name, int age, const string address);
        ~Person();

        string get_full_name() const{
            return m_full_name;
        }
        string get_address() const{
            return m_address;
        }
        int get_age() const{
            return m_age;
        }

        // void set_full_name(string_view fn){
        //     m_full_name = fn;
        // }
        // void set_age(int age_param){
        //     m_age = age_param;
        // }
        // void set_address(string_view addr){
        //     m_address = addr;
        // }
};

#endif