#ifndef __PTR_HELP__
#define __PTR_HELP__

class PtrHelp{
private:
    int *node;
    int counter;
    PtrHelp();
    void upCounter();
    void subCounter();

    friend class Ptr;
} ;

#endif // __PTR_HELP__
