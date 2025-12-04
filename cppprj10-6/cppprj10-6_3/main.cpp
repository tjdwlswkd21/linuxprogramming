#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int max_val = 0, r = 0, c = 0;
    vector<vector<int>> rw{
        {-5, 2, 35},
        {-20, 5, 100},
        {-75, 5, -25}
    };

    for (vector<vector<int>>::iterator rit = rw.begin(); rit != rw.end(); ++rit) {
        vector<int>::iterator cit = max_element(rit->begin(), rit->end());
        if (*cit > max_val) {
            max_val = *cit;
            r = distance(rw.begin(), rit);
            c = distance((*rit).begin(), cit);
        }
    }
    cout << "최대값은 " << max_val << endl << "위치는 " << r << "헹 " << c << "열";
}