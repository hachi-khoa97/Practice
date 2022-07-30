#include "player.h"
using namespace std;

Player::Player(string_view game_param, string_view first_name_param, string_view last_name_param){
    m_game = game_param;
    first_name = first_name_param;
    last_name = last_name_param;
}

std::ostream& operator << (std::ostream& out, const Player &player){
    out << "Player [game: " <<player.m_game << " names: " << player.get_first_name() << " " << player.get_last_name() << "]" << endl;
    return out;
}

Player::~Player(){
    
}