#include <iostream>
#include "person.h"
#include "nurse.h"
using namespace std;

Nurse::Nurse(){
 
}

ostream& operator << (std::ostream& out, const Nurse &operand){
    out << "Nurse [Full name: " << operand.get_full_name() 
        << ", Age: " << operand.get_age() 
        << ", Address: " << operand.get_address() 
        << ", Pratice certification id: " << operand.practice_certification_id
        << "]" << endl;
    return out;
}

Nurse::~Nurse(){
    
}