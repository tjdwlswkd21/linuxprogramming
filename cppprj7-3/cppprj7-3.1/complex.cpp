#include <iostream>
#include "complex.h"
using namespace std;

complex::complex() : complex(0, 0) {}

complex::complex(int a, int b) : r(a), i(b) {
    cout << "복소수 " << r << " + " << i << "j 생성" << endl;
}

void complex::print() {
    cout << "두 복소수의 합은 "<< r << " + " << i << "j" << endl;
}

complex complex::operator+(const complex& a) {
    complex tmp;
    tmp.r = this->r + a.r;
    tmp.i = this->i + a.i;
    return tmp;
}