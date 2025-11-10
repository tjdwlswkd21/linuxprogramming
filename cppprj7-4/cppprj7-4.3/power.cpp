#include <iostream>
#include "power.h"
using namespace std;

Power::Power() : Power::Power(0, 0) {}

Power::Power(int a, int b) : k(a), p(b) {}

void Power::print() {
    cout << "kick=" << k << ",punch=" << p << endl;
}

Power operator*(const Power& a, int b) {
    Power temp(a.k * b, a.p * b);
    return temp;
}

Power operator*(int a, const Power& b) {
    return b * a;
}