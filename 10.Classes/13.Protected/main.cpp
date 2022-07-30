#include <iostream>
#include <string_view>
#include "player.h"
using namespace std;

int main(){
    Player p1("Esport","Faker","Soyn");
    cout << "Player: " << p1 << endl;
    // p1.set_first_name("Faker");
    // p1.set_last_name("Hook");
    // cout << "Player: " << p1 << endl;
    return 0;
} 