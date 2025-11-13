#ifndef _SHAPE_H_
#define _SHAPE_H_
class Shape {
    int x, y;
public:
    void setpoint(int a, int b);
    void print();
};
class Circle: public Shape {
    int r;
public:
    void set_c(int a, int b, int c);
    void print_c();
};
class Rect: public Shape {
    int h, w;
public:
    void set_s(int a, int b, int c, int d);
    void print_r();
};
class Triangle: public Shape {
    int h, w;
public:
    void set_t(int a, int b, int c, int d);
    void print_t();
};
#endif