#include <iostream>
#include "complex.h"
using namespace std;

complex::complex() : complex::complex(0, 0) {}

complex::complex(int a, int b) : r(a), i(b) {
    cout << "복소수 " << r << " + " << i << "j 생성" << endl;
}

complex complexadd(complex& a, complex& b) {
    return complex(a.r + b.r, a.i + b.i);
}
void complex::print() {
    cout << "두 복소수의 합은 "<< r << " + " << i << "j" << endl;
}
