#include <iostream>
#include "shape.h"
using namespace std;
void Shape::setpoint(int a, int b) {
    x = a;
    y = b;
}
void Shape::print() {
    cout << "좌표 (" << x << "," << y << ")";
}

void Circle::set_c(int a, int b, int c) {
    setpoint(a, b);
    r = c;
} 
void Circle::print_c() {
    print();
    cout << "에 반지름" << r << "인 원" << endl;
}

void Rect::set_s(int a, int b, int c, int d) {
    setpoint(a, b);
    w = c;
    h = d;
}
void Rect::print_r() {
    print();
    cout << "에 폭" << w << ", " 
    << "높이" << h << "인 직사각형" << endl;
}

void Triangle::set_t(int a, int b, int c, int d) {
    setpoint(a, b);
    w = c;
    h = d;
}
void Triangle::print_t() {
    print();
    cout << "에 밑변" << w << ", " 
    << "높이" << h << "인 삼각형" << endl;
}