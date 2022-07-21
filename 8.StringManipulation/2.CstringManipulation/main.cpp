#include <iostream>
#include <cstring>
using namespace std;
#define STR_LEN_FUNC        0
#define STR_CMP_FUNC        1
#define STR_NCMP_FUNC       2
#define STR_CHR_FUNC        3
#define STR_RCHR_FUNC       4
#define STR_CONCAT_FUNC     5
#define STR_NCONCAT_FUNC    6
#define STR_CPY_FUNC        7
#define STR_NCPY_FUNC       8

void str_len(){
    cout << "strlen" << endl;
    const char message1[] = "Hello Xa";
    const char *message2 = "Hello Xa";
    cout << "message1: " << message1 << endl;
    cout << "strlen(message1): " << strlen(message1) << endl;       //strlen ignore null character
    cout << "sizeof(message1): " << sizeof(message1) << endl;       //include null character
    cout << "message2: " << message2 << endl;
    cout << "strlen(message2): " << strlen(message2) << endl;
    cout << "sizeof(message2): " << sizeof(message2) << endl;       //size of pointer
}

void str_cmp(){
    //strcmp
    cout << "strcmp" << endl;
    const char *stringData1 = "Alabama";
    const char *stringData2 = "Blabama";

    char stringData3[] = "Alabama";
    char stringData4[] = "Blabama";

    cout << "strcmp (" << stringData1 << ", " << stringData2 << "): " << strcmp(stringData1,stringData2) << endl;
    cout << "strcmp (" << stringData3 << ", " << stringData4 << "): " << strcmp(stringData3,stringData4) << endl;
}

void str_ncmp(){
    //strncmp
    cout << "strncmp" << endl;
    const char *stringData1 = "Alabama";
    const char *stringData2 = "Blabama";
    int n = 3;
    cout << endl;
    cout << "strncmp (" << stringData1 << ", " << stringData2 << ", " << n << "): " << strncmp(stringData1,stringData2,n) << endl;

    stringData1 = "aaaqq";
    stringData2 = "aaazxqwezxd";
    cout << "strncmp (" << stringData1 << ", " << stringData2 << ", " << n << "): " << strncmp(stringData1,stringData2,n) << endl;
}

void str_chr(){
    //strchr
    cout << "strchr" << endl;
    const char *str = {"Try not. Do, or do not. There is no try."};
    char target = 'T';
    const char *result = str;
    int iterations{};

    while ((result = strchr(result,target)) != NULL){
        cout << "Found '" << target << "' starting at '" << result << "'" << endl;
        ++result;
        ++iterations;
    }
    cout << "iterations: " << iterations << endl;
}

void str_rchr(){
    cout << "strrchr" << endl;

    char input[] = "/home/ubuntu/hello.cpp";
    char *output = strrchr(input,'/');
    if(output)
        cout << output + 1 << endl; //+1 since we want to start printing past the character found by strrchr
}

void str_concat(){
    cout << "strcat" << endl;
    char dest[50] = "hello ";
    char src[50] = "world1";
    strcat(dest,src);
    cout << "dest: " << dest << endl;
    strcat(dest,"abcaq");
    cout << "dest: " << dest << endl;
    cout << "=======================================" << endl;
    cout << "More concat: " << endl;
    char *dest1 = new char[30]{'F','f','q','g','G','\0'};
    char *source = new char[30]{',','m','o','\0'};

    cout << "strlen(dest1): " << strlen(dest1) << endl;
    cout << "strlen(source): " << strlen(source) << endl;
    cout << "Concatenating ..." << endl;
    strcat(dest1,source);
    cout << "strlen(dest1): " << strlen(dest1) << endl;
    cout << "dest1: " << dest1 << endl;
}

void str_nconcat(){
    cout << "strncat" << endl;
    char dest[50] = "hello ";
    char src[50] = "Never gonna give u up";
    cout << strncat(dest,src,9) << endl;
}

void str_cpy(){
    cout << "strcpy" << endl;
    const char* source = "Hello Rickroll";
    char *dest = new char[strlen(source) + 1];
    strcpy(dest,source);

    cout << "sizeof(dest): " << sizeof(dest) << "\tsizeof(source): " << sizeof(source) << endl;
    cout << "strlen(dest): " << strlen(dest) << "\tstrlen(source): " << strlen(source) << endl;
    cout << "dest: " << dest << endl;
}
void str_ncpy(){
    cout << "strncpy" << endl;
    const char* source = "Hello";
    char dest[] = {'a','b','c','d','e','f','\0'};

    cout << "dest: " << dest << endl;
    cout << "Copying 2 character..." << endl;
    strncpy(dest,source,2);

    cout << "dest: " << dest << endl;
}
int main(){
    int choice = 0;
    cin >> choice;
    switch(choice){
        case STR_LEN_FUNC:
            str_len();
            break;
        case STR_CMP_FUNC:
            str_cmp();
            break;
        case STR_NCMP_FUNC:     //compare N first byte
            str_ncmp();
            break;
        case STR_CHR_FUNC:      //find how many times a character appear
            str_chr();
            break;
        case STR_RCHR_FUNC:     //Find last occurence
            str_rchr();
            break;
        case STR_CONCAT_FUNC:
            str_concat();
            break;
        case STR_NCONCAT_FUNC:  //Concat n character
            str_nconcat();
            break;
        case STR_CPY_FUNC:
            str_cpy();
            break;
        case STR_NCPY_FUNC:     //copy n character from src to dest
            str_ncpy();
            break;
    }
    return 0; 
}
 