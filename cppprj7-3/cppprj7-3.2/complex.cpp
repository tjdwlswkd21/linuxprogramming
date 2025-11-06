#include <iostream>
#include "complex.h"
using namespace std;

complex::complex() : complex::complex(0, 0) {}

complex::complex(int a, int b) : r(a), i(b) {
    cout << "복소수 " << r << " + " << i << "j 생성" << endl;
}

void complex::print() {
    cout << "두 복소수의 곱은 "<< r << " + " << i << "j" << endl;
}

complex complex::operator*(const complex& a) {
    int real = r * a.r - i * a.i;
    int imag = r * a.i + i * a.r;
    return complex(real, imag);
}