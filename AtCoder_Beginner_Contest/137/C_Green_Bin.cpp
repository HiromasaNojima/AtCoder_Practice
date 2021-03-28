#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long solve(int num, long long ans) {
    num--;
    ans += num;
    if (num == 0) {
        return ans;
    }

    return solve(num, ans);
}

int main() {
    int n;
    cin >> n;
    map<string, int> m;
    rep(i, n) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        m[s]++;
    }

    long long ans = 0;
    auto begin = m.begin();
    auto end = m.end();
    for (auto it = begin; it != end; it++) {
        int temp = (int)it->second;
        ans += solve(temp, 0);
    }

    cout << ans << endl;
    return 0;
}