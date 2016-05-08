#include <iostream>
#include <string>

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#include "Person.h"
#include "Student.h"

using namespace std;



void functest(Person p) ;
void changeVar(int &var) ;
void test1();
void test2();
void test3();
void test4();
void test5();
void test6();

int main(){

    test6();
}

void test6(){

    enum STATE {OPEN,CLOSE,INSTALL,UNINSTALL} ;
    STATE stat = OPEN ;

    switch(stat){
        case OPEN:
        cout<<"open status"<<endl; break;
        case CLOSE:
        cout<<"close status"<<endl; break;
        case INSTALL:
        cout<<"installed"<<endl; break;
        case UNINSTALL:
        cout<<"uninstalled"<<endl; break;
        default:
        cout<<"unknow"; break;
    }
}

void test5(){
    typedef Person * Ref_Person ;
    Ref_Person rp1 = new Person ;  // 调用new 会触发构造函数
    rp1->init("jack", 22);
    delete rp1;  // 调用delete 会触发析构函数
}

void test4(){
    double a = 1/3 ;
    cout << a << endl; // 0

    double b = 1.0F/3.0F ;
    cout << b << endl; // 0.333333

    double c = 2E2;
    cout << c << endl; // 200
}

void test3(){

    int i = 0 ;
    for (i=0; i<10; i++){
        int a = i ;
        std::cout << a << std::endl;
    }
    //std::cout << a << std::endl;  // 错误：‘a’在此作用域中尚未声明
}

void test2(){
    std::cout<<"hello" "world" " !"<<std::endl ;

    Person lucy(string("dn"), 11);
    lucy.say();
    functest(lucy);

    Student jack(string("jack"), 21);
    jack.say();
    functest(jack);
}

void test1(){
    int abc = 2 ;
    //int &def = abc ;
    //def = 3 ;

    changeVar(abc);
    std::cout << ":::" << abc << std::endl; // :::3

    const int def = 2 ;
    //int &ghi = def ;  //  错误：将类型为‘int&’的引用初始化为类型为‘const int’的表达式无效
    const int &ghi = def;

    long int size1 = sizeof(1);
    long int size2 = sizeof(1L);
    long int size3 = sizeof(1U);
    long int size4 = sizeof(1UL);
    std::cout << ":::size is " << size1         //:::size is 4
                << "\n:::size L is " << size2   //:::size L is 8
                << "\n:::size U is " << size3   //:::size U is 4
                << "\n:::size UL is " << size4  //:::size UL is 8
                << std::endl;
    int test = -1U ;
    std::cout << "test is " << test << std::endl; //test is -1
}

void changeVar(int &var){
    var = 3;
}

void functest(Person p)
{
    p.init();

}
