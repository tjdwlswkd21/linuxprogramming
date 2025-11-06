#include <iostream>
#include "power.h"
using namespace std;

Power::Power() : Power::Power(0, 0) {}

Power::Power(int a, int b) : k(a), p(b) {}

void Power::print() {
    cout << "kick=" << k << ",punch=" << p << endl;
}

Power Power::operator-(int a) {
    int k = this->k - a;
    int p = this->p - a;
    return Power(k, p);
}