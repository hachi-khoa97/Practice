#include <iostream>
#include "person.h"
#include "civileng.h"
using namespace std;

CivilEng::CivilEng(){

}

ostream& operator << (ostream& out, const CivilEng &operand){
    // out << "CivilEng [Full name: " << operand.get_full_name() 
    //     << ", Age: " << operand.get_age() 
    //     << ", contract_count: " << operand.contract_count
    //     << ", specialty: " << operand.m_specialty
    //     << "]" << endl;
    
    return out;
}

CivilEng::~CivilEng(){
    
}