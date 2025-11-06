#include "power.h"

int main() {
Power a(3, 5), b;
a.print();
b.print();
b = a - 2;
a.print();
b.print();
return 0;
}
