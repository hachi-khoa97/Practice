#include <iostream>
using namespace std;

const int a = 10;
const int b = 20;
const int c = 30;
const int d = 40;
const int e = 50;

int main(){
    int num = 40;
    switch (num)
    {
    // case a:
    //     cout << "a = " << a << endl;
    //     break;
    // case b:
    //     cout << "b = " << b << endl;
    //     break;
    // case c:
    //     cout << "c = " << c << endl;
    //     break;
    // case d:
    //     cout << "d = " << d << endl;
    //     break;
    // case e:
    //     cout << "e = " << e << endl;
    //     break;                               //if no break, continue execute every case from the correct case
    case a:
    case b:
    case c:
    case d:
        // cout << "d = " << d << endl;
        // break;
    case e:
        cout << "e = " << e << endl;            //Since case d is correct but no command, will execute command in case e
        break;
    }
    //if no break, continue execute every case from the correct case
    return 0;
}
 