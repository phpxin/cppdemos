#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Ptr.h"

// g++ -g -o ../bin/demo PtrHelp.cpp Ptr.cpp ptrdemo.cpp
int main(int argc, char *args[])
{
    Ptr pa;
    pa.setNode(1);

    Ptr pb;
    pb.setNode(2);

    pa = pb ;
    std::cout << "pa " << pa.getNode() << std::endl;

    return 0;
}

void test(){

    /*
    Ptr pa;
    pa.setNode(1);
    std::cout << "pa " << pa.getNode() << std::endl;

    Ptr pb(pa);
    pb.setNode(2);
    std::cout << "pa " << pa.getNode() << std::endl;
    std::cout << "pb " << pb.getNode() << std::endl;

    Ptr *pc = new Ptr(pb);

    std::cout << "pc " << pc->getNode() << std::endl;

    delete  pc;

    //std::cout << "pa " << pa.getNode() << std::endl;
    */
}
