#ifndef _COMPLEX_H_
#define _COMPLEX_H_

class Complex {
    int r, i;
public:
    Complex();
    Complex(int a, int b);
    void print();
    Complex& operator++();
    Complex operator++(int x);
    Complex& operator--();
    Complex operator--(int x);
};

#endif