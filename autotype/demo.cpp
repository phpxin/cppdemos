#include <iostream>
#include <string>
#include <vector>
#include "Car.h"

using namespace std;

template <typename T> int compare(T a, T b){
    if(a==b)
        return 0;

    if(a<b)
        return -1;

    return 1;
}

template <typename T, typename S> void lala(T a, S b){
    cout << a+b << endl;
}

int main(int argc, char *args[])
{
    Car<int> car(1);
    car.run();

    car.setNumber(2);
    cout << car.getNumber() << endl;

    /*
    int cmp = compare(1, 2);

    cout << cmp << endl;

    lala(1 , 2.9);
    */
    return 0;
}
