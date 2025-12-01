#include <iostream>
using namespace std;

class Student {
    int m[3];

public:
    void set(int idx, int score) { m[idx] = score; }

    int total() const { return m[0] + m[1] + m[2]; }
};

int main() {
    Student stu[3];
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "번째 학생의 국어, 영어, 수학 성적 입력: ";
        for (int j = 0; j < 3; j++) {
            int score;
            cin >> score;
            stu[i].set(j, score);
        }
    }

    int bestIdx = 0;
    for (int i = 1; i < 3; i++)
        if (stu[i].total() > stu[bestIdx].total())
            bestIdx = i;

    cout << "\n최우수 학생은 " << bestIdx + 1 << "번째 학생이고, 평균점수는 "
        << stu[bestIdx].total() / 3.0 << "점입니다.\n";
}