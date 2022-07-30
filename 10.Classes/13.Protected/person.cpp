#include "person.h"
using namespace std;
Person::Person(){

}

Person::Person(string &first_name_param, string &last_name_param):first_name(first_name_param),last_name(last_name_param){
 
}

std::ostream& operator << (std::ostream& out, const Person &person){
    out << "Person [" << person.first_name << " " << person.last_name << "]" << endl;
    return out;
}

Person::~Person(){
    
}