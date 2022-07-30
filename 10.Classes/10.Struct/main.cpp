#include <iostream>
#include <string_view>
using namespace std;

class Dog{     
    public:
        string m_name;
};

struct Cat{
    string m_name;
};

struct Point{
    double x;
    double y;
};

void print_point(const Point &p){
    cout << "Point(" << p.x << "," << p.y <<")" << endl;
}

int main(){
    Dog dog1;
    Cat cat1;

    dog1.m_name = "XXXX";
    cat1.m_name = "Meo";
    cout << "Dog name: " << dog1.m_name << endl;
    cout << "Cat name: " << cat1.m_name << endl;

    Point p1;
    p1.x = 25.1;
    p1.y = 21.5;
    print_point(p1);

    p1.x = 1;
    p1.y = 1;
    print_point(p1);
    return 0;
} 