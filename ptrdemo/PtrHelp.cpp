#include <iostream>
#include <cstring>
#include <cstdio>
#include <unistd.h>
#include <cstdlib>
#include "PtrHelp.h"

PtrHelp::PtrHelp()
{
    this->node = (int *)calloc(1, sizeof(int));
    this->counter = 1 ;
}


void PtrHelp::upCounter()
{
    ++this->counter;

    std::cout << "ptr help : " << this->counter << std::endl;
}

void PtrHelp::subCounter()
{
    if(--this->counter == 0){
        
        if(this->node != NULL){
            free(this->node);
            this->node = NULL;
        }
        delete this->node;
        delete this;
        std::cout << "free printers ..." << std::endl;
    }

    std::cout << "ptr help : " << this->counter << std::endl;
}
