#ifndef __CAR__
#define __CAR__

#include <iostream>

template <typename T> class Car{
private:
    T number;
public:
    Car(T n): number(n) {}
    void setNumber(T n) ;
    T getNumber() ;
    void run();
} ;

template <typename T> void Car<T>::run(){
    std::cout << this->number << std::endl;
}

template <typename T> void Car<T>::setNumber(T n) {
    this->number = n ;
}

template <typename T> T Car<T>::getNumber() {
    return this->number ;
}

#endif // __CAR__
