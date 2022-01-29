#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  long long sum = 0;
  for (int i = 0; i < n ; i++) {
    cin >> v[i];
    sum += v[i];
  }

  vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));
  dp[0][0] = true;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j <= sum; j++) {
        if(dp[i][j]) {
          dp[i + 1][j] = true;
          dp[i + 1][j + v[i]] = true;
        }
    }
  }
  
  int ans = 0;
  for(int j = 0; j <= sum; j++) {
    if(dp[n][j]) ans++;
  }

  cout << ans << endl;
  return 0;
}