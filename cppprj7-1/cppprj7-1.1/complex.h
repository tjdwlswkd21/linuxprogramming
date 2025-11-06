#ifndef _COMPLEX_H_
#define _COMPLEX_H_

class complex {
    int r, i;
public:
    complex();
    complex(int a, int b);
    void print();
    friend complex complexadd(complex &a, complex &b);
};

#endif


