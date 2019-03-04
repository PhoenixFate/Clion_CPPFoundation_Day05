//
// Created by phoenix on 3/4/2019.
//
#include <iostream>
#include <string>
#include <string.h>
using  namespace std;

//一个类默认创建：构造函数、析构函数、拷贝构造、operator=赋值操作符（进行简单的值拷贝）
class Person61
{
public:
    Person61(int age):age(age)
    {

    }

    int age;
};

void test601()
{
    Person61 p1(10);
    Person61 p2(0);
    p2=p1;
    cout<<&p1<<endl;
    cout<<&p2<<endl;
    cout<<"p2.age:"<<p2.age<<endl;
}

class Person62
{
public:
    Person62(const char * name)
    {
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    ~Person62()
    {
        if(name!=NULL)
        {
            delete[]name;
            name=NULL;
        }
    }
    Person62&operator=(const Person62&p)
    {
        if(name!=NULL)
        {
            delete[]name;
            name=NULL;
        }
        this->age=p.age;
        this->name=new char[strlen(p.name)+1];
        strcpy(this->name,p.name);
        return *this;
    }

    int age;
    char*name;
};

void test602()
{
    Person62 p1("abceee");
    Person62 p2("def");
    p2=p1;
    cout<<" \b"<<p2.name<<endl;



    char *c=new char[strlen("工资")+3]{0};
    c[0]=' ';
    c[1]='\b';
    strcpy(c+2,"狗子");
    cout<<c<<endl;
    string s("公子");
    cout<<" \b"+s<<endl;
    cout<<strlen("钩子")<<endl;
}

int main6()
{
    test601();
    test602();
    return 0;
}
