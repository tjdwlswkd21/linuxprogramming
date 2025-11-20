#include <iostream>
using namespace std;

template <class T>
T max_tampl(T a[], int size) {
    T res = a[0];
    for (int i = 1; i < size; i++) {
        if (res < a[i]) res = a[i];
    }
    return res;
}

int main() {
    int a[5]={-5, 10, 30, 20, 6};
    double b[4]= {3.14, 1.5, -6.0, 0.5};
    char c[3] = {'a', 'x', 'p'};
    cout << "정수배열의 최대값은 " << max_tampl<int>(a, 5) << endl;
    cout << "실수배열의 최대값은 " << max_tampl<double>(b, 4) << endl;
    cout << "문자배열의 최대값은 " << max_tampl<char>(c, 3) << endl;
}
