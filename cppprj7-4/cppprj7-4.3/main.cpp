#include "power.h"

int main() {
    Power a(3, 5), b;
    a.print();
    b.print();
    b = 2*a;
    a.print();
    b.print();
}
