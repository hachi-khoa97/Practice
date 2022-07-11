#include <iostream>
using namespace std;

int main(){
    const unsigned int COUNT = 10;
    unsigned int i = 0;
    while(i < COUNT) {
        cout << "i = " << i << endl;
        i++;
    }
    cout << "i now is: " << i << endl;
    return 0;
}
 