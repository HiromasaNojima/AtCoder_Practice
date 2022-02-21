#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n,x;
  cin >> n >> x;
  vector<vector<int>> in(n + 1, vector<int>(2));
  rep(i, n) {
    cin >> in[i + 1][0] >> in[i + 1][1];
  }

  vector<vector<bool>> dp(109, vector<bool>(10009, false));
  dp[0][0] = true;
  dp[1][in[1][0]] = true;
  dp[1][in[1][1]] = true;

  for(int i = 2; i <= n; i++) {
    for(int j = 0; j <= x; j++) {
      if(dp[i-1][j]) {
        // dp[i][j] = true;
        if(j + in[i][0] <= x) {
          dp[i][j + in[i][0]] = true; 
        }

        if(j + in[i][1] <= x) {
          dp[i][j + in[i][1]] = true; 
        }
      }
    }
  }

  if(dp[n][x]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}