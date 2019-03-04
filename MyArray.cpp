//
// Created by phoenix on 3/4/2019.
//
#include "MyArray.h"
#include <iostream>

using namespace std;

MyArray::MyArray() {
    this->capacity=100;
    this->size=0;
    this->address=new int[this->capacity];
}

MyArray::MyArray(int capacity) {
    cout<<"MyArray(int )"<<endl;
    this->capacity=capacity;
    this->size=0;
    this->address=new int[capacity];
}

MyArray::~MyArray() {
    if(this->address!= NULL)
    {
        cout<<"~MyArray()"<<endl;
        delete[] this->address;
        this->address=NULL;
    }
}

MyArray::MyArray(const MyArray &myArray) {
    cout<<" \b拷贝构造函数"<<endl;
    this->capacity=myArray.capacity;
    this->address=new int[myArray.capacity];
    this->size=myArray.size;
    for(int i=0;i<this->size;++i)
    {
        this->address[i]=myArray.address[i];
    }
}

void MyArray::pushBack(int value) {
    //让用户自己判断是否越界
    this->address[this->size]=value;
    this->size++;
}

int MyArray::getData(int position) {
    return this->address[position];
}

void MyArray::setData(int position, int value) {
    this->address[position]=value;
}

int MyArray::getSize() {
    return this->size;
}

int MyArray::getCapacity() {
    return this->capacity;
}

int& MyArray::operator[](int index) {
    return this->address[index];
}
