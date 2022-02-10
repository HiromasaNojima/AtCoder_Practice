#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, w;
  cin >> n >> w;
  vector<vector<long long>> dp(n + 1, vector<long long>(w + 1));
  dp[0][0] = 0;
  for(int i = 1; i <= w; i++) {
     dp[0][i] =  -2147483648;
  }
  vector<long long> weight(n + 1, 0);
  vector<long long> value(n + 1, 0);
  for(int i = 1; i <= n; i++) {
    cin >> weight[i] >> value[i];
  }

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j<= w; j++) {
      if (j < weight[i]) {
        dp[i][j] = dp[i-1][j];
      } else {
        dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i]] + value[i]);
      }
    }
  }

  long long ans = -1;
  for(int i = 1; i <= w; i++) {
    ans = max(dp[n][i], ans);
  }
  cout << ans << endl;
  return 0;
}