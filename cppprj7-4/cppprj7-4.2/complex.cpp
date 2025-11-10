#include <iostream>
#include "complex.h"
using namespace std;

Complex::Complex() : Complex(0, 0) {}

Complex::Complex(int a, int b) : r(a), i(b) {
    cout << "복소수 " << r << " + " << i << "j 생성" << endl;
}

void Complex::print() {
    cout << r << " + " << i << "j" << endl;
}

Complex& operator++(Complex& a) {
    a.r++; a.i++; return a;
}
Complex operator++(Complex& a, int x) {
    Complex tmp = a;
    a.r++; a.i++; return tmp;
}

Complex& operator--(Complex& a) {
    a.r--; a.i--; return a;
}
Complex operator--(Complex& a, int x) {
    Complex tmp = a;
    a.r--; a.i--; return tmp;
}