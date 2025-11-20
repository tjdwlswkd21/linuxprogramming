#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() : radius(0) {}
    Circle(int r) : radius(r) {}
    int getRadius() { return radius; }

    bool operator>(const Circle& other) const {
        return radius > other.radius; }

    bool operator<(const Circle& other) const {
        return radius < other.radius; }
};

template <class T>
T bigger(T a, T b) {
    return (a > b) ? a : b;
}
int main() {
    int a = 20, b = 50, c;
    c = bigger(a, b);
    cout << "20과 50 중 큰 값은 " << c << endl;

    Circle donut(10), pizza(20), y;
    y = bigger(donut, pizza);
    cout << "donut과 pizza 중 큰 반지름은 " << y.getRadius() << endl;

    return 0;
}
