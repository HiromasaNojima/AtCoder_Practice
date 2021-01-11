#include <bits/stdc++.h> 
using namespace std;

int main() {
    vector<int> vec(3);
    cin >> vec[0] >> vec[1] >> vec[2];

    sort(vec.begin(), vec.end());

    int diff1 = vec[2] - vec[0];
    int diff2 = vec[2] - vec[1];

    int answer = 0;
    if (diff1 % 2 == 1 && diff2 % 2 == 1) {
        answer = diff1 / 2 + diff2 / 2 + 1;
    } else if (diff1 % 2 == 0 && diff2 % 2 == 0) {
        answer = diff1 / 2 + diff2 / 2;
    } else {
        answer = diff1 / 2 + diff2 / 2 + 2;
    }

    cout << answer << endl;
}