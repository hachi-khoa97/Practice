#include <iostream>
using namespace std;

int main(){
    int number1 = 65;
    int number2 = 60;

    bool result = (number1 < number2); //True
    cout << boolalpha << "Result: " << result << endl;

    // if(result == true)
    //     cout << number1 << " is less than " << number2 << endl;

    // if(!(result == true))       //if not true is true
    //     cout << number1 << " is NOT less than " << number2 << endl;

    // if(result == true)
    //     cout << number1 << " is less than " << number2 << endl;
    // else   
    //     cout << number1 << " is NOT less than " << number2 << endl;

    if(number1 < number2)
        cout << number1 << " is less than " << number2 << endl;
    else   
        cout << number1 << " is NOT less than " << number2 << endl;

    return 0;
}
 