//
// Created by phoenix on 3/4/2019.
//

#ifndef CLION_CPPFOUNDATION_DAY05_MYARRAY_H
#define CLION_CPPFOUNDATION_DAY05_MYARRAY_H

class MyArray
{
public:
    //默认构造，默认100容量
    MyArray();
    MyArray(int capacity);
    ~MyArray();
    MyArray(const MyArray & myArray);
    void pushBack(int value);

    //根据索引获取值
    int getData(int position);

    //根据索引设置值
    void setData(int position,int value);

    int getSize();
    int getCapacity();
    int& operator[](int index);
private:
    int *address;//指向真正的存储数据的空间
    int size;   //数组大小
    int capacity;  //数组容量
};

#endif //CLION_CPPFOUNDATION_DAY05_MYARRAY_H
