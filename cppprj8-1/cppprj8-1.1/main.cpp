#include "shape.h"
int main() {
    Circle x; Rect y; Triangle z;
    x.set_c(0, 0, 2);
    y.set_s(1, 1, 5, 10);
    z.set_t(2, 2, 3, 4);
    x.print_c(); y.print_r(); z.print_t();
}

