#include <iostream>
using namespace std;

int main(){
    const char *message = {"Hachi"};            //if not const, warning: ISO C++ forbids converting a string constant to 'char*
    cout << "Message: " << message << endl;
    cout << "Message: " << *message << endl;    //When derefernce, string will become array of char and ptr message will point
                                                //to first element, in this case is "H"
    //*message = "B"; //Compile error

    //Allow user to modify the string
    char message1[] = {"Hachi Hachi"};
    message1[0] = 'X';
    cout << "message1: " << message1 << endl;
    
    return 0; 
}
 