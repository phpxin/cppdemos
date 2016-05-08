#include <iostream>
#include <cstring>
#include <cstdio>
#include <unistd.h>
#include <cstdlib>
#include "Ptr.h"
#include "PtrHelp.h"

Ptr::Ptr(){
    this->ph = new PtrHelp();
}

Ptr::~Ptr(){
    std::cout << "destroy is called " << std::endl;
    this->ph->subCounter();
}

/*
 复制构造函数，当对象被复制，需要将引用计数增加1
*/
Ptr::Ptr(const Ptr &ptr){
    std::cout << "clone is called " << std::endl;
    this->ph = ptr.ph;
    this->ph->upCounter(); // 当对象作为另一个对象的副本而创建时，复制构造函数复制指针并增加与之相应的使用计数的值
}

/*
 重载赋值操作符，
 首先将右值的引用计数加1
 然后将左值的引用计数减1
 最后将右值需要复制的成员复制给左值（必须复制PtrHelp实例），返回左值的引用
*/
Ptr& Ptr::operator=(const Ptr &ptr){
    (ptr.ph)->upCounter();
    this->ph->subCounter();
    this->ph = ptr.ph ;
    return *this;
}

void Ptr::setNode(int n){
    *(this->ph->node) = n ;
}

int Ptr::getNode(){
    return *(this->ph->node);
}
