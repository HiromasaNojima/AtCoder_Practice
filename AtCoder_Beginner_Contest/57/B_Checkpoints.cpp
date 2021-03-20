#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    vector<long long> b(n);
    rep(i, n) {
        cin >> a[i] >> b[i];
    }

    vector<long long> c(m);
    vector<long long> d(m);
    rep(i, m) {
        cin >> c[i] >> d[i];
    }

    vector<int> ans(n);
    rep(i, n) {
        long long min_distance;
        int pos;
        rep(j, m) {
            long long temp = abs(a[i] - c[j]) + abs(b[i] - d[j]);
            // cout << temp << endl;
            if (j == 0) {
                min_distance = temp;
                pos = j;
                continue;
            }
            if (min_distance > temp) {
                min_distance = temp;
                pos = j;
            }
        }
        ans[i] = ++pos;
    }

    rep(i, n) {
        cout << ans[i] << endl;
    }

    return 0;
}