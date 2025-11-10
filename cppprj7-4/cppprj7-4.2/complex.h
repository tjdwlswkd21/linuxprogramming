#ifndef _COMPLEX_H_
#define _COMPLEX_H_

class Complex {
    int r, i;
public:
    Complex();
    Complex(int a, int b);
    void print();
    friend Complex& operator++(Complex& a);
    friend Complex operator++(Complex& a, int x);
    friend Complex& operator--(Complex& a);
    friend Complex operator--(Complex& a, int x);
};

#endif