#include <iostream>
#include "shape.h"
using namespace std;
void Circle::set_c(int a, int b, int c) {
    x = a;y = b;r = c;
} 
void Circle::print_c() {
    cout << "좌표 (" << x << "," << y << ")";
    cout << "에 반지름" << r << "인 원" << endl;
}
void Rect::set_s(int a, int b, int c, int d) {
    x = a;y = b;w = c;h = d;
}
void Rect::print_r() {
    cout << "좌표 (" << x << "," << y << ")";
    cout << "에 폭" << w << ", " 
    << "높이" << h << "인 직사각형" << endl;
}
void Triangle::set_t(int a, int b, int c, int d) {
    x = a; y = b; w = c; h = d;
}
void Triangle::print_t() {
    cout << "좌표 (" << x << "," << y << ")";
    cout << "에 밑변" << w << ", " 
    << "높이" << h << "인 삼각형" << endl;
}