#include <iostream>
using namespace std;

int main(){
    int number[] = {1,2,3,4,5,6,7,8,9,0};

    //Read beyond bounds: read garbage data or might crash program
    cout << "number[12]: " << number[12] << endl;
    
    //When write beyond bounds, though compiler allows it but u don't own
    //the memory at index 12, so other programs may modify it and your 
    //program may read bogus data at a later time. Or you can even
    //corrupt dat aused by other parts of your program
    number[129999] = 1000;
    cout << "number[129999]: " << number[129999] << endl;   //Crash

    cout << "Program ends" << endl;

    return 0;
}
 