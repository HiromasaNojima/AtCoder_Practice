#include <bits/stdc++.h> 
using namespace std;

int main() {
    string s;
    cin >> s;
    int answer = 0;

    int count = 0;
    for (char c : s) {
        if (c == 'R') {
            count++;
        } else {
            count = 0;
        }
        answer = max(answer, count);
    }

    cout << answer << endl;
    return 0;
}