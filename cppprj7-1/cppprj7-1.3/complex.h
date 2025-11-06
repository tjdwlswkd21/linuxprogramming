#ifndef _COMPLEX_H_
#define _COMPLEX_H_

class Complex {
    int r, i;
public:
    Complex(int a = 0, int b = 0);
    void show();
    friend class ComplexManager;
};

class ComplexManager {
public:
    Complex ComplexAdd(Complex &a, Complex &b);
    Complex ComplexSub(Complex &a, Complex &b);
};

#endif

