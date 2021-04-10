#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int solve(int n, int m, int N, int ans) {
    int rest = 0;
    while (N) {
        int temp = (N / m) * n;
        ans += temp;
        rest += N % m;
        N = temp;
    }

    if (rest / m >= 1) {
        return solve(n, m, rest, ans);
    }
    return ans;
}


int main() {
    int m, n, N;
    cin >> m >> n >> N;
    int ans = N;
    ans = solve(n, m, N, ans);
    cout << ans << endl;
    return 0;
}