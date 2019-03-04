//
// Created by phoenix on 3/4/2019.
//
#include <iostream>
using  namespace std;

class MyInteger
{
    friend ostream& operator<<(ostream&cout,MyInteger&myInteger);
public:
    MyInteger()
    {
        num=0;
    }
    //前置++ overload
    MyInteger& operator++()
    {
        this->num++;
        return *this;
    }
    //后置++ overload
    MyInteger operator++(int)
    {
        MyInteger temp(*this);
        this->num++;
        return temp;
    }
    int num;
};

ostream& operator<<(ostream&cout,MyInteger myInteger)
{
    cout<<myInteger.num;
    return cout;
}

void test401()
{
    MyInteger myInteger;
    cout<<(MyInteger)(++myInteger)<<endl;
    cout<<myInteger++<<endl;
    cout<<myInteger.num<<endl;
}

int main4()
{
    test401();
    return 0;
}

