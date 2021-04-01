#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s, t;
    cin >> s >> t;
    int ans = t.size();
    rep (i , s.size() - t.size() + 1) {
        int diff = 0;
        rep (j, t.size()) {
            if (s[i + j] != t[j]) {
                diff++;
            }
        }

        ans = min(diff, ans);
    }

    cout << ans << endl;
    return 0;
}