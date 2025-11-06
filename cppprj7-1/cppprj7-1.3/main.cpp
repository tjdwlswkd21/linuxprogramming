#include <iostream>
using namespace std;
#include "complex.h"

int main() {
    Complex x(5, 5), y(2, 2), sum, sub;
    ComplexManager man;

    sum = man.ComplexAdd(x, y);
    cout << "두 복소수의 합은";
    sum.show();

    sub = man.ComplexSub(x, y);
    cout << "두 복소수의 차는";
    sub.show();

    return 0;
}
