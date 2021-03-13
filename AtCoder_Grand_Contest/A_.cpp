#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    vector<int> vec(s.size() + 1, 0);
    rep (i, s.size()) {
        if (s[i] == '<') {
            vec[i + 1] = vec[i] + 1;
        }
    }
    
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '>') {
            vec[i] = max(vec[i], vec[i + 1] + 1);
        }
    }

    long long answer = 0;
    for (int num : vec) {
        answer += num;
    }

    cout << answer << endl;
    return 0;
}