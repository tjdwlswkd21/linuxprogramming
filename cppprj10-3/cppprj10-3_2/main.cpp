#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void getmaxin(const vector<T>& v, T& max, T& min) {
    max = v[0];
    min = v[0];
    for (const T& x : v) {
        if (x > max) max = x;
        if (x < min) min = x;
    }
}

int main() {
    vector<int> v(4);
    cout << "정수 4개를 입력하시오: ";
    for (int &x : v) cin >> x; 
    int max, min;
    getmaxin(v, max, min);
    cout << "최대값은 " << max << 
    ", 최소값은 " << min << "입니다." << endl;
}