#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long n, k;
  cin >> n >> k;
  vector<long long> v(n + 1);
  v[0] = 0;
  for(int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  
  vector<long long> dp(n + 1, 0);
  dp[1] = 0;
  for(int i = 2; i <= n; i++) {
    long long mincos = abs(v[i - 1] - v[i]) + dp[i - 1];
    for(int j = 2; j <= k; j++) {
      long long prestep = i - j;
      if (prestep < 1) break;
      mincos = min(mincos, abs(v[prestep] - v[i]) + dp[prestep]);
    }
    dp[i] = mincos;
  }

  cout << dp[n] << endl;
  return 0;
}