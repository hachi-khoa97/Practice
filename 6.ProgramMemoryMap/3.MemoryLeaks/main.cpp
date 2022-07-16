#include <iostream>
using namespace std;

int main(){

    int *p_number = new int(64);

    int number = 55;

    p_number = &number //p_number now lost address of line 6
    
    return 0;
}
 