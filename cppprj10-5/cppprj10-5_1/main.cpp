#include <iostream>
using namespace std;

class Matrix2x2 {
private:
    int m[2][2];

public:
    Matrix2x2() : m{0} {}
    Matrix2x2(int a00, int a01, int a10, int a11) : m{ {a00,a01},{a10,a11} } {}

    Matrix2x2 operator+(const Matrix2x2& other) {
        Matrix2x2 result;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                result.m[i][j] = m[i][j] + other.m[i][j];
            }
        }
        return result;
    }

    void print() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << m[i][j] << " ";
            cout << "\n";
        }
    }
};

int main() {
    Matrix2x2 A(2, 4, 5, -5);
    Matrix2x2 B(-2, 3, 0, -5);
    Matrix2x2 C = A + B;
    cout << "연산결과:" << endl;
    C.print();
    return 0;
}