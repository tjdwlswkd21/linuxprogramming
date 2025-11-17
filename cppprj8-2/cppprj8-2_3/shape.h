#ifndef _SHAPE_H_
#define _SHAPE_H_

class Shape {
    int x, y;
public:
    Shape(int a, int b);
    void show();
    ~Shape();
};

class Circle : public Shape {
    int r;
public:
    Circle(int a, int b, int c);
    void show();
    ~Circle();
};

class Rect : public Shape {
    int w, h;
public:
    Rect(int a, int b, int c, int d);
    void show();
    ~Rect();
};

class Triangle : public Shape {
    int w, h;
public:
    Triangle(int a, int b, int c, int d);
    void show();
    ~Triangle();
};

#endif


