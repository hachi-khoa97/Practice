#include "player.h"
using namespace std;

Player::Player(string_view game_param):m_game(game_param){
 
}

std::ostream& operator << (std::ostream& out, const Player &player){
    out << "Player [game: " <<player.m_game << " names: " << player.get_first_name() << " " << player.get_last_name() << "]" << endl;
    return out;
}

Player::~Player(){
    
}