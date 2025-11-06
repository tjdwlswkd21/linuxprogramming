#include <iostream>
#include "complex.h"
using namespace std;

Complex::Complex(int a, int b) : r(a), i(b) {}

void Complex::show() {
    cout << r << "+" << i << "j" << endl;
}

Complex ComplexManager::ComplexAdd(Complex &a, Complex &b) {
    return Complex(a.r + b.r, a.i + b.i);
}

Complex ComplexManager::ComplexSub(Complex &a, Complex &b) {
    return Complex(a.r - b.r, a.i - b.i);
}

