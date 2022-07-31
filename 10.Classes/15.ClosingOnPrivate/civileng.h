#ifndef CIVILENG_H
#define CIVILENG_H
#include "engineer.h"   

class CivilEng : public Engineer{
    friend ostream& operator << (ostream& out, const CivilEng &operand);

    private:
        string m_specialty = "None";
    
    public:
        CivilEng();
        ~CivilEng();

        void build_road();
};
#endif