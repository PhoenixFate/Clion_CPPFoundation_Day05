#include <iostream>
#include "MyArray.h"
using  namespace std;
void test101()
{
    //堆区创建数组
    MyArray *myArray=new MyArray(30);
    MyArray *array2=new MyArray(*myArray);
    delete myArray;
    for(int i=0;i<10;++i)
    {
        array2->pushBack(i);
    }
    array2->setData(0,100);
    for(int i=0;i<array2->getSize();++i)
    {
        cout<<array2->getData(i)<<endl;
    }
    cout<<array2->getData(5)<<endl;
    cout<<"size:"<<array2->getSize()<<endl;
    cout<<"capacity:"<<array2->getCapacity()<<endl;

    (*array2)[3]=100;
    cout<<"array[i]:"<<(*array2)[3]<<endl;

}

int main() {
    test101();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}