//
// Created by phoenix on 3/4/2019.
//
#include <iostream>
using  namespace std;

class Person2
{
public:
    Person2()
    {

    }
    Person2(int a,int b):a(a),b(b)
    {

    }
    //+号运算符的重载 成员函数方式
//    Person2 operator + (Person2&p1)//二元
//    {
//        Person2 tmp;
//        tmp.a=this->a+p1.a;
//        tmp.b=this->b+p1.b;
//        return tmp;
//    }
    int a;
    int b;
};

Person2 operator+(Person2&p1,Person2&p2)//二元
{
    Person2 temp;
    temp.a=p1.a+p2.a;
    temp.b=p1.b+p2.b;
    return temp;
}

Person2 operator+(Person2&p1,int a)//二元
{
    Person2 temp;
    temp.a=p1.a+a;
    temp.b=p1.b+a;
    return temp;
}

ostream& operator<<(ostream &cout,Person2 &p)
{
    cout<<"p.a:"<<p.a<<" p.b:"<<p.b;
    return cout;
}

void test201()
{
    Person2 p1(10,10);
    Person2 p2(20,20);
    Person2 p3=p1+p2;
    cout<<"p3.a:"<<p3.a<<endl;
    cout<<"p3.b:"<<p3.b<<endl;
    cout<<p3<<endl;
    Person2 p4=p1+40;
    cout<<p4<<endl;
}

int main2()
{
    test201();
    return 0;
}

