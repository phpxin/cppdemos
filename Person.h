#ifndef __PERSON__
#define __PERSON__

#include <string>
#include <iostream>

using namespace std;

class Person{
protected:
    string name;
    int age;

public:
    int type ;

    Person(string n, int a) ;
    Person():name(""),age(0) {}
    ~Person();

    string getName() ;
    int getAge() ;
    virtual void say() ;
    void init();
    void init(string n, int a);
} ;

#endif // __PERSON__
