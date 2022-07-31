#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

class Engineer : private Person{
    friend ostream& operator << (ostream&, const Engineer &operand);

    private:
        int contract_count = 0;

    public:
        Engineer();
        ~Engineer();

        void build_sth(){
            m_full_name = "MyMY";
            m_age = 953;
            contract_count = 20;
        }
};

#endif