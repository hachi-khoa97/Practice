#include <iostream>
using namespace std;

int main(){

    char message[6] = {'H','a','c','h','i','\0'};  

    // cout << "message: " << message << endl;  // will print out Hachi + wierd character if there's no "\0"
    // cout << "message: ";
    // for(auto i : message){
    //     cout << i;
    // }
    // cout << endl;

    // //Change character in array
    // message[1] = 'o';
    // cout << "message modified: ";
    // for(auto i : message){
    //     cout << i;
    // }
    // cout << endl;

    //If a character array is null terminated, it's called as C-string
    char message1[] = {'H','a','c','h','i','\0'};
    cout << "message1: " << message1 << endl;
    cout << "sizeof(message1): " << sizeof(message1) << endl;

    char message2[6] = {'H','a','c','h','i'};
    cout << "message2: " << message2 << endl;
    cout << "sizeof(message2): " << sizeof(message2) << endl;

    char message3[] = {'H','a','c','h','i'};    //Not a c-string since there's no null character
    cout << "message3: " << message3 << endl;
    cout << "sizeof(message3): " << sizeof(message3) << endl;


    //String literal
    char message4[] = {"Hachi Hachi"};
    cout << "message4: " << message4 << endl;
    cout << "sizeof(message4): " << sizeof(message4) << endl;

    //
    int number[] = {1,2,3,4,5};
    cout << "number: " << number << endl;
    
    return 0;
}
 