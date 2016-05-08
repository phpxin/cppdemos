#include <iostream>
#include <string>
#include "Person.h"

using namespace std;


Person::Person(string n, int a){
    this->name = n ;
    this->age = a ;
    this->type = 1 ;
}
Person::~Person(){
    cout << "destroy Person ,,," << endl;
}

void Person::init(){
    this->say();
}

void Person::init(string n, int a){
    this->name = n ;
    this->age = a ;
    this->type = 1 ;
    this->say();
}

string Person::getName(){
    return this->name ;
}

int Person::getAge(){
    return this->age ;
}

void Person::say(){
    std::cout << "My name is " << this->name << " age is "<< this->age << std::endl;
}
