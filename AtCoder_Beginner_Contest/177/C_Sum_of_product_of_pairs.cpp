#include <bits/stdc++.h> 
using namespace std;

const int MOD = 1000000007;

int main() {
    int n = 0;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<long long> sum(n+1, 0);
    for (int i = 0; i < n; i++) {
        sum[i + 1] = (sum[i] + vec[i]);
    }

    long long answer = 0;
    for (int i = 0; i < n - 1; i++) {
        answer += vec[i] * ((sum[n] - sum[i + 1]) % MOD);
        answer %= MOD;
    }

    cout << answer << endl;
}