#include <iostream>
#include "shape.h"
using namespace std;

Shape::Shape(int a, int b) : x(a), y(b) { cout << "Shape 생성, ";}
void Shape::show() {cout << "좌표 (" << x << ", " << y << ")에 "; }
Shape::~Shape() { cout << "Shape 소멸" << endl;}

Circle::Circle(int a, int b, int c) : Shape(a, b), r(c) {
    cout << "Circle 생성" << endl; }
void Circle::show() {Shape::show(); cout << "반지름 " << r << "인 원" << endl;}
Circle::~Circle() { cout << "Circle 소멸, ";}

Rect::Rect(int a, int b, int c, int d) : Shape(a, b), w(c), h(d) {
    cout << "Rect 생성" << endl; }
void Rect::show() {Shape::show(); cout << "폭" << w << ", 높이 " << h << "인 직사각형" << endl;}
Rect::~Rect() { cout << "Rect 소멸, ";}

Triangle::Triangle(int a, int b, int c, int d) : Shape(a, b), w(c), h(d) {
    cout << "Triangle 생성" << endl; }
void Triangle::show() {Shape::show(); cout << "폭" << w << ", 높이 " << h << "인 삼각형" << endl;}
Triangle::~Triangle() { cout << "Triangle 소멸, ";}