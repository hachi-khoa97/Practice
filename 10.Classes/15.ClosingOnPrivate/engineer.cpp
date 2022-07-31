#include <iostream>
#include "person.h"
#include "engineer.h"
using namespace std;

Engineer::Engineer(){
 
}

ostream& operator << (std::ostream& out, const Engineer &operand){
    out << "Engineer [Full name: " << operand.get_full_name() 
        << ", Age: " << operand.get_age() 
        << ", Address: " << operand.get_address() 
        << ", contract_count: " << operand.contract_count
        << "]" << endl;
    return out;
}

Engineer::~Engineer(){
    
}