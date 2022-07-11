#include <iostream>
using namespace std;

int main(){
    const unsigned int COUNT = 10;
    unsigned int i = 0;
    //run body then checks
    do{
        cout << "[" << i << "]" << endl;
        i++;
    } while(i < COUNT);
    cout << "i now is: " << i << endl;
    return 0;
}
 