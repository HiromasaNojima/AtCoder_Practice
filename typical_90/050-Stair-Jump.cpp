#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long mod = 1000000007;

int main() {
  int n, l;
  cin >> n >> l;
  vector<long long> dp(n + 1);
  dp[0] = 0;

  for (int i = 1; i <= n; i++) {
    if (i < l) {
      dp[i] = 1;
    } else if (i == l) {
      dp[i] = 2;
    } else {
      dp[i] = (dp[i - 1] + dp[i - l]) % mod;
    }
  }

  cout << dp[n] % mod << endl;
  return 0;
}