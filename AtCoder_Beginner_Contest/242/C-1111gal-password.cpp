#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int mod = 998244353;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> dp(n + 9, vector<int>(11, 0));
  for(int i = 1; i <= 9; i++) dp[1][i] = 1;

  for(int i = 2; i <= n; i++) {
    for(int j = 1; j <= 9; j++) {
      dp[i][j] += dp[i-1][j];
      dp[i][j] %= mod;
      if(j > 1) {
        dp[i][j] += dp[i-1][j-1];
        dp[i][j] %= mod;
      }
      if(j < 9) {
        dp[i][j] += dp[i-1][j+1];
        dp[i][j] %= mod;
      }
    }
  }

  int ans = 0;
  for(int i = 1; i <= 9; i++) {
    ans += dp[n][i];
    ans %= mod;
  }

  cout << ans << endl;
  return 0;
}