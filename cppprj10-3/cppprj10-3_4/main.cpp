#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void removeminus(vector<T>& v) {
    cout << "초기 벡터 원소: ";
    for (T& x : v) cout << x << " ";
    cout << endl;

    for (auto it = v.begin(); it != v.end(); ) {
        if (*it < 0) it = v.erase(it);
        else ++it; }
    cout << "음수를 삭제 후 벡터 원소: ";
    for (T& x : v) cout << x << " ";
    cout << endl;

    T sum = 0;
    for (T& x : v) sum += x;
    double average = 0.0;
    if (!v.empty()) average = (double)sum / v.size();
    cout << "평균값: " << average << endl;
}

int main() {
    vector<int> v(5);
    cout << "숫자 5개를 입력하세요: ";
    for (int& x : v) cin >> x;
    removeminus(v);
    return 0;
}
