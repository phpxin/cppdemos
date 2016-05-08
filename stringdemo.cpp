#include <iostream>
#include <string>

using namespace std;

void test1(){
    string s ;
    s = "string" ;

    string s2("string 2") ;

    string s3(3, 'c') ;

    string s4(s3) ;

    cout << s << s2 << s3 << s4 << endl;
}

void test3(){
    const char *c_str = "hello world" ;
    string str(c_str) ;
    cout << "string is "<< str <<endl ;
}

void test2(){
    string str("hello") ;
    if(str.empty()){
        cout << "string str is empty" << endl ;
    }else{
        int n = 2;
        string::size_type st = str.size();
        cout << "string str size is " << st << endl;
        cout << "the charAt " << n << " is " << str[n] << endl ;
        str[n] = 'd' ;
        cout << "string str is "<< str<< endl;
    }
}

int main(int argc, char *args[]){

    test3();

    return 0;
}
