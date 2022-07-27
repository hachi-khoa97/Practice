#include <iostream>
using namespace std;

int sum_compute(int a, int b){
    int result = a + b;
    cout << "Inside: &result(int): " << &result << endl;
    return result;          //return by value
}

string add_string(string str1, string str2){
    string result = str1 + str2;
    cout << "Inside: &result(string): " << &result << endl;
    return result;
}

int main(){
    int x = 1;
    int y = 3;
    int result = sum_compute(x,y);
    cout << "Outside: &result(int): " << &result << endl;
    cout << "result(int): " << result << endl;

    string str1 = "Hachi";
    string str2 = "XXXXX";
    string result_str = add_string(str1,str2);
    cout << "Outside: &result_str(string): " << &result_str << endl;
    cout << "result_str(string): " << result_str << endl;

    return 0;
} 