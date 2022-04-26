#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long n, k;
  cin >> n >> k;
  vector<long long> a(n);
  vector<long long> b(n);
  
  rep(i, n) {
    cin >> a[i];
  }
  rep(i, n) {
    cin >> b[i];
  }

  vector<vector<bool>> dp(n,vector<bool>(2, false));
  dp[0][0] = true;
  dp[0][1] = true;

  for(int i = 1; i < n; i++) {
    bool temp = abs(a[i - 1] - a[i]) <= k;
    if (temp && dp[i-1][0]) dp[i][0] = true;
    temp = abs(b[i - 1] - a[i]) <= k;
    if (temp && dp[i-1][1]) dp[i][0] = true;
    temp = abs(a[i - 1] - b[i]) <= k;
    if (temp && dp[i-1][0]) dp[i][1] = true;
    temp = abs(b[i - 1] - b[i]) <= k;
    if (temp && dp[i-1][1]) dp[i][1] = true;
  }

  if(dp[n - 1][0] || dp[n - 1][1] ) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}