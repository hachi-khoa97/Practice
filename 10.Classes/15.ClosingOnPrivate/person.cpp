#include "person.h"
using namespace std;

Person::Person(const string_view &full_name, int age, const string address):m_full_name{full_name},m_age{age},m_address{address}{
 
}

ostream& operator << (std::ostream& out, const Person &person){
    out << "Person[Full name: " << person.get_full_name() << ", Age: " << person.get_age() << ", Address: " << person.get_address() << "]" << endl;
    return out;
}

Person::~Person(){
    
}