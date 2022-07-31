#ifndef NURSE_H
#define NURSE_H

#include "person.h"
class Nurse : protected Person{
    friend ostream& operator << (ostream&, const Nurse &operand);

    private:
        int practice_certification_id = 0;
    
    public:
        Nurse();
        ~Nurse();

        void treat_unwell_person(){
            m_full_name = "Maaaa";
            m_age = 111;
        };
};


#endif