#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T>
void getmax(const vector<T>& v, T& max) {
    max = v[0];
    for (const T& x : v) {
        if (x > max) max = x;
    }
}

int main() {
    vector<string> v(5);
    for (string &x : v) {
        cout << "문자열을 입력하세요: ";
        cin >> x;
    } 
    string max;
    getmax(v, max);
    cout << "사전에서 가장 뒤에 나오는 단어는 " 
    << max << "입니다." << endl;
}
