#include <iostream>
using namespace std;

int get_max(int a, int b){
    cout << "Calling int overload ..." << endl;
    return (a>b)? a:b;
}

double get_max(double a, double b){
    cout << "Calling double overload ..." << endl;
    return (a>b)? a:b;
}

double get_max(int a, double b){
    cout << "Calling int double overload ..." << endl;
    return (a>b)? a:b;
}

string_view get_max(string_view str1,string_view str2){
    cout << "Calling string overload ..." << endl;
    return (str1>str2)? str1:str2;
}

int main(){
    int x1 = 2;
    int x2 = 100;
    double x3 = 12.33;
    double x4 = 100.11;

    auto result = get_max(x2,x4);
    cout << "Result: " << result << endl;

    get_max("Mot","Hachi");
    return 0;
} 