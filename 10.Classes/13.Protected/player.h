#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string_view>
#include "person.h"
using namespace std;

class Player : public Person{
    friend ostream& operator << (ostream& out, const Player &player);

    private:
        string m_game = "None";

    public:
        Player() = default;
        Player(string_view game_param, string_view first_name_param, string_view last_name_param);
        ~Player();
};

#endif