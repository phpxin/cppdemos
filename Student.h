#ifndef __STUDENT__
#define __STUDENT__

#include <string>
#include "Person.h"

class Student : public Person {
public:
    Student(string n, int a);
    virtual void say() ;
};


#endif // __STUDENT__
