#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string full_name;                           //empty string
    string planet = "planet Earth";             //String literal
    string prefered_planet = planet;            //Init with other existing string
    string message = {"Never gonna give",5};    //Init with n first characters of string
    string wierd_message(4,'e');                //Init with multiple copy of a char
    string say_never = {message,0,5};           //Start at 0, taking 5 next characters

    cout << full_name << endl;
    cout << planet << endl;
    cout << prefered_planet << endl;
    cout << message << endl;
    cout << wierd_message << endl;
    cout << say_never << endl;

    //Chaging at runtime
    planet = "Mars Planet";                     //Memory will be return to OS
    cout << planet << endl;

    //Use raw array
    const char *planet1 = "Jupiter";                                            //wasted
    planet1 = "Uranus, Uranus, Uranus, Uranus, Uranus";                         //planet1 now point to another string, means another memory
    cout << "planet1: " << planet1 << endl;
    return 0; 
}
 