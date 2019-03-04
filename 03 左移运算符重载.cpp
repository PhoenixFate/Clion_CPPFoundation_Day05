//
// Created by phoenix on 3/4/2019.
//
#include <iostream>
using  namespace std;

class Person3
{
    friend ostream&operator<<(ostream& cout,Person3 &p);
public:
    Person3(int a,int b):a(a),b(b)
    {

    }
private:
    int a;
    int b;

};

ostream& operator<<(ostream& cout,Person3&p)
{
    cout<<"p.a: "<<p.a<<"  p.b: "<<p.b;
}

void test301()
{
    Person3 p3(10,20);
    cout<<p3<<endl;
}

int main3()
{
    test301();
    return 0;
}

