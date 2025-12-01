#include <iostream>
using namespace std;

class Matrix {
    int m[3][3];
    int max_val;
    int max_i;
    int max_j;
public:
    Matrix(int arr[9]) {
        int k = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                m[i][j] = arr[k++];
            }
        }
        findMax();
    }

    void findMax() {
        max_val = m[0][0];
        max_i = 0;
        max_j = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                m[i][j] = (m[i][j] < 0) ? 0 : 255;
            }
        }
    }

    void printMax() {
        cout << "수정행렬" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << m[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    int arr[9] = { -5, 2, 35, -20, 5, 100, -75, 5, -25 };
    Matrix a(arr);
    a.printMax();
    return 0;
}