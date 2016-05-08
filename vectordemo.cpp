#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "Person.h"

using namespace std ;

// 容器
void test1()
{
    vector<int> intarr;
    //intarr.push_back(1);
    //intarr.push_back(2);

    int _i = 0 ;
    for(_i=0; _i<9; _i++)
    {
        intarr.push_back(_i);
    }

    vector<int>::size_type intarr_incr = 0 , intarr_total = intarr.size() ;
    for(intarr_incr=0; intarr_incr<intarr_total; intarr_incr++)
    {
        cout << intarr[intarr_incr] << endl;
    }

    vector<int>::iterator intarr_pos = intarr.begin() + ceil(intarr.size()/2.0) ; // 5   ,   这里需要加.0，否则会由于强制类型转换 int/int 结果不会为double
    cout << "mid 1 is " << *intarr_pos << endl ;

    vector<int>::iterator intarr_pos2 = intarr.begin() + ceil(intarr.size()/2) ; // 4
    cout << "mid 2 is " << *intarr_pos2 << endl ;

    vector<int>::iterator intarr_pos3 = intarr.begin() + floor(intarr.size()/2) ; // 4
    cout << "mid 3 is " << *intarr_pos3 << endl ;

    vector<int>::iterator intarr_pos4 = intarr.begin() + floor(intarr.size()/2.0) ; // 4
    cout << "mid 4 is " << *intarr_pos4 << endl ;

    vector<int>::iterator intarr_pos5 = intarr.begin() + intarr.size()/2 ; // 4
    cout << "mid 5 is " << *intarr_pos5 << endl ;
}

// 只读迭代器
void test2()
{
    vector<string> strs ;
    strs.push_back("hello");
    strs.push_back("apples");

    vector<string>::iterator strs_iter = strs.begin();
    while(strs_iter != strs.end())
    {
        cout << *strs_iter << endl;
        //*strs_iter = string("lala");
        *strs_iter = "re:" + (*strs_iter);
        strs_iter++;
    }

    strs_iter = strs.begin();  // 重置迭代器指针
    while(strs_iter != strs.end())
    {
        cout << *strs_iter << endl;
        strs_iter++;
    }
}

int main(int argc, char *args[]){

    test1();

    return 0 ;
}
