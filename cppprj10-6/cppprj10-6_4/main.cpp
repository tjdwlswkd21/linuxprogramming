#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> rw{
        {-5, 2, 35},
        {-20, 5, 100},
        {-75, 5, -25}
    };
    for (auto rit = rw.begin(); rit != rw.end(); ++rit) {
        for (auto cit = rit->begin(); cit != rit->end(); ++cit) {
            if (*cit < 0) *cit = 0;
            else *cit = 255;
            cout << *cit << "\t";
        }
        cout << endl;
    }
}