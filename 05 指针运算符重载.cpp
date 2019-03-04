//
// Created by phoenix on 3/4/2019.
//
#include <iostream>
using  namespace std;

class Person5 {
public:
    Person5(int age) : age(age) {

    }

    ~Person5()
    {
        cout<<"~Person5()"<<endl;
    }
    void showAge()
    {
        cout<<"age:"<<this->age<<endl;
    }
    int age;
};

class SmartPointer
{
public:
    SmartPointer(Person5*person5)
    {
        this->person5=person5;
    }
    //重载->
    Person5* operator->()
    {
        return this->person5;
    }

    //重载*
    Person5&operator*()
    {
        return *person5;
    }

    ~SmartPointer()
    {
        cout<<" \b智能指针析构"<<endl;
        if(person5!=NULL)
        {
            delete person5;
            person5=NULL;
        }
    }

private:
    Person5 *person5;
};

void test501()
{
    Person5 p(10);
    Person5 *p2=new Person5(10);//没delete , 使用智能指针，自动析构
    SmartPointer st(new Person5(20));
    //重载-> 之后便能调用Person的所有方法
    st->showAge();
    (*st).showAge();
}

int main5()
{
    test501();
    cout<<"---------------------------05-------------------------"<<endl;
    return 0;
}
