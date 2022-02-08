#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<vector<int>> v(n + 1, vector<int>(3, 0));
  for(int i = 1; i <= n; i++) {
    rep(j, 3) cin >> v[i][j];
  }

  vector<vector<int>> dp(n + 1, vector<int>(3, 0));
  for(int i = 1;i <= n; i++) {
    dp[i][0] = v[i][0] + max(dp[i - 1][1], dp[i - 1][2]);
    dp[i][1] = v[i][1] + max(dp[i - 1][0], dp[i - 1][2]);
    dp[i][2] = v[i][2] + max(dp[i - 1][0], dp[i - 1][1]);
  }
  cout << max(dp[n][0], max(dp[n][1], dp[n][2])) << endl;
  return 0;
}