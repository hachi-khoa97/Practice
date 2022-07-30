#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <string_view>
using namespace std;

class Person{
    friend ostream& operator << (ostream& out, const Person &person);
    private:
        string first_name = "Hana";
        string last_name = "ChiChi";

    public:
        Person();
        Person(string &first_name_param, string &last_name_param);
        ~Person();

        string get_first_name() const{
            return first_name;
        }
        string get_last_name() const{
            return last_name;
        }

        void set_first_name(string_view fn){
            first_name = fn;
        }
        void set_last_name(string_view ln){
            last_name = ln;
        }
};

#endif