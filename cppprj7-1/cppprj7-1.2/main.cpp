#include "complex.h"

int main() {
    complex x(2, 3), y(-5, 10), sum;
    ComplexManager manager;

    sum = manager.complexadd(x, y);
    sum.print();

    return 0;
}
