#include <iostream>
#include "person.h"
#include "player.h"
using namespace std;

Player::Player(){

}

ostream& operator << (std::ostream& out, const Player &player){
    out << "Player[Full name: " << player.get_full_name() 
        << ", Age: " << player.get_age() 
        << ", Address: " << player.get_address() << "]" << endl;
    return out;
}

Player::~Player(){

}