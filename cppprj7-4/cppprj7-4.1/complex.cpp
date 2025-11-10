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

Complex& Complex::operator++() {
    r++; i++; return *this;
}
Complex Complex::operator++(int x) {
    Complex tmp = *this;
    r++; i++; return tmp;
}

Complex& Complex::operator--() {
    r--; i--; return *this;
}
Complex Complex::operator--(int x) {
    Complex tmp = *this;
    r--; i--; return tmp;
}