#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"

class Player : public Person{
    friend ostream& operator << (ostream&, const Player &player);

    private:
        int m_career_start_year = 0;
        double salara = 0.0;
        int health_factor = 0;
    
    public:
        Player();
        ~Player();

        void play(){
            m_full_name = "XXXX";
            m_age = 252;
        };
};

#endif