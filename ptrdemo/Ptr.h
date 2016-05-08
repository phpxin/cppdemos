#ifndef __PTR__
#define __PTR__

class PtrHelp;

class Ptr{

private:
    PtrHelp *ph;

public:
    Ptr();
    ~Ptr();
    Ptr(const Ptr &ptr);
    Ptr& operator=(const Ptr &ptr);

    void setNode(int n);
    int getNode();

    friend class PtrHelp ;
} ;

#endif // __PTR__
