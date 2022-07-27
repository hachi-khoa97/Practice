#include <iostream>
#include <string> 
using namespace std;

void max_str(const string &input1, const string input2, string &output){
    if(input1 > input2) output = input1;
    else 
        output = input2;
}

void max_int(int input1, int input2, int &output){
    if(input1 > input2) output = input1;
    else 
        output = input2;
}

void max_double(double input1, double input2, double *output){
    if(input1 > input2) *output = input1;
    else 
        *output = input2;
}


int main(){
    string out_str;
    string str1 = "Alabama";
    string str2 = "Alabamaqweada";
    max_str(str1,str2,out_str);
    cout << "Max_str: " << out_str << endl;

    int out_int = 0;
    int m_int1 = 20;
    int m_int2 = 111;
    max_int(m_int1,m_int2,out_int);
    cout << "Max_int: " << out_int << endl;

    double out_double;
    double m_double1 = 20.51;
    double m_double2 = 20.5111;
    max_double(m_double1,m_double2,&out_double);
    cout << "Max_int: " << out_double << endl;

    return 0;
} 