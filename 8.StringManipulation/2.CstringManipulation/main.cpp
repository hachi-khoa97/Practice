#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cout << "strlen" << endl;
    const char message1[] = "Hello Xa";
    const char *message2 = "Hello Xa";
    cout << "message1: " << message1 << endl;
    cout << "strlen(message1): " << strlen(message1) << endl;       //strlen ignore null character
    cout << "sizeof(message1): " << sizeof(message1) << endl;       //include null character

    cout << "message2: " << message2 << endl;
    cout << "strlen(message2): " << strlen(message2) << endl;
    cout << "sizeof(message2): " << sizeof(message2) << endl;       //size of pointer

    //strcmp
    // cout << "strcmp" << endl;
    // const char *stringData1 = "Alabama";
    // const char *stringData2 = "Blabama";

    // char stringData3[] = "Alabama";
    // char stringData4[] = "Blabama";

    // cout << "strcmp (" << stringData1 << ", " << stringData2 << "): " << strcmp(stringData1,stringData2) << endl;
    // cout << "strcmp (" << stringData3 << ", " << stringData4 << "): " << strcmp(stringData3,stringData4) << endl;
    
    //strncmp
    // cout << "strncmp" << endl;
    // const char *stringData1 = "Alabama";
    // const char *stringData2 = "Blabama";
    // int n = 3;
    // cout << endl;
    // cout << "strncmp (" << stringData1 << ", " << stringData2 << ", " << n << "): " << strncmp(stringData1,stringData2,n) << endl;

    // stringData1 = "aaaqq";
    // stringData2 = "aaazxqwezxd";
    // cout << "strncmp (" << stringData1 << ", " << stringData2 << ", " << n << "): " << strncmp(stringData1,stringData2,n) << endl;

    //strchr
    // cout << "strchr" << endl;
    // const char *str = {"Try not. Do, or do not. There is no try."};
    // char target = 'T';
    // const char *result = str;
    // int iterations{};

    // while ((result = strchr(result,target)) != NULL){
    //     cout << "Found '" << target << "' starting at '" << result << "'" << endl;
    //     ++result;
    //     ++iterations;
    // }
    // cout << "iterations: " << iterations << endl;

    //Find last occurence
    // cout << "strrchr" << endl;

    // char input[] = "/home/ubuntu/hello.cpp";
    // char *output = strrchr(input,'/');
    // if(output)
    //     cout << output + 1 << endl; //+1 since we want to start printing past the character found by strrchr

    return 0; 
}
 