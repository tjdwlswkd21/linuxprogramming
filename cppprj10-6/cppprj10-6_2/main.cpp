#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> students;
    vector<int> sum;
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "번째 학생의 국어, 영어, 수학 성적 입력: ";
        vector<int> temp;
        int ssum = 0;
        for (int j = 0; j < 3; j++) {
            int score;
            cin >> score;
            ssum += score;
            temp.push_back(score);
        }
        sum.push_back(ssum);
        students.push_back(temp);
    }
    vector<int>::iterator it = max_element(sum.begin(), sum.end());
    cout << "\n최우수 학생은 " << distance(sum.begin(), it) + 1 << "번째 학생이고, 평균점수는 " << *it / 3.0 << "점입니다.\n";
}