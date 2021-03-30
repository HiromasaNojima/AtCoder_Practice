#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    map<int, int> m;
    rep (i, n) {
        int a;
        cin >> a;
        m[a]++;
        m[a + 1]++;
        m[a - 1]++;
    }

    int ans = -1;
    for (const auto &item : m) {
        ans = max(ans, item.second);
    }

    cout << ans << endl;
    return 0;
}