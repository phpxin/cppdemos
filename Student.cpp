#include "Student.h"

Student::Student(string n, int a):Person(n,a)
{
    //this->name = n;
    //this->age = a;
    this->type = 2;
}

void Student::say(){
    std::cout << "Student name is " << this->name << " age is "<< this->age << std::endl;
}
