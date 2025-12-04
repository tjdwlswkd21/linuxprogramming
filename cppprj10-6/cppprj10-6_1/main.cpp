#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> operator+(const vector<vector<int>>& a, const vector<vector<int>>& b) {
    vector<vector<int>> result(2, vector<int>(2));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    return result;
}

void print(vector<vector<int>>& a) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << a[i][j] << ", ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> A{ {2, 4}, {5, -5} };
    vector<vector<int>> B{ {-2, 3}, {0, -5} };
    vector<vector<int>> C = A + B;
    cout << "연산결과:" << endl;
    print(C);
    return 0;
}