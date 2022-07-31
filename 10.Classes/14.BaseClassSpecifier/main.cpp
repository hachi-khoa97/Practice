#include <iostream>
#include <string_view>
#include "person.h"
#include "player.h"
#include "nurse.h"
#include "engineer.h"
using namespace std;

int main(){
    Person p1("Who", 23,"233 Jpw");
    cout << "Person: " << p1;
    cout << "======================" << endl;
    
    Player play1;
    play1.m_full_name = "ABC";
    // play1.m_age = 25;            //Cannot access due to protected
    cout << "Player: " << play1;
    cout << "======================" << endl;

    Nurse nurse1;
    nurse1.treat_unwell_person();
    cout << "Nurse: " << nurse1;
    cout << "======================" << endl;

    Engineer eng1;
    eng1.build_sth();
    cout << "Engineer: " << eng1;
    cout << "======================" << endl;
    return 0;
} 