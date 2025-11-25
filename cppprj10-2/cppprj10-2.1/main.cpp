#include <iostream>
using namespace std;


template <class T1>
class GClass {
    T1 a, b;
public:
    void set(T1 x, T1 y) {
        a = x; b = y; }
    void get(T1& x, T1& y) {
        x = a; y = b; }

    void swap() {
        T1 tamp = a;
        a = b;
        b = tamp;
    }
};

int main() {
    int a, b;
    GClass<int> x;
    x.set(2, 5);
    x.get(a, b);
    cout << "a=" << a << '\t' << "b=" << b << endl;
    x.swap();
    x.get(a, b);
    cout << "a=" << a << '\t' << "b=" << b << endl;
    double c, d;
    GClass<double> y;
    y.set(3.14, 6.28);
    y.get(c, d);
    cout << "c=" << c << '\t' << "d=" << d << endl;
    y.swap( );
    y.get(c, d);
    cout << "c=" << c << '\t' << "d=" << d << endl;
}
