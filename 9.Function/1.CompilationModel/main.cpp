#include <iostream>
#include "compare.h"        //Preprocessor
#include "operation.h"
                            //Copy everything in included file and paste to this line
using namespace std;

int main(){
    int maximum = find_max(9,16);
    int minimum = find_min(2,16);
    int inc_mul = incre_mult(2,8);
    cout << "Max: " << maximum << endl;
    cout << "Min: " << minimum << endl;
    cout << "inc_mul: " << inc_mul << endl;
    return 0;
} 