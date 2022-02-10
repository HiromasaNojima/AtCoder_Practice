#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s, t;
  cin >> s >> t;
  int ss = s.size();
  int ts = t.size();

  vector<vector<int>> dp(ss + 1, vector<int>(ts + 1, 0));
  for(int i = 1; i <= ss; i++) {
    for(int j = 1; j <= ts; j++) {
      if(s[i-1] == t[j-1]) {
        dp[i][j] = dp[i-1][j-1] + 1;
      } else {
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      }
    }
  }

  int len = dp[s.size()][t.size()];
  vector<char> ans(len);
  int a = s.size();
  int b = t.size();
  while(len > 0) {
    if(s[a - 1] == t[b - 1]) {
      ans[len - 1] = s[a - 1];
      a--;
      b--;
      len--;
    } else if(dp[a][b] == dp[a-1][b]) {
      a--;
    } else {
      b--;
    }
  }

  for(char c : ans) {
    cout << c;
  }
  cout << endl;
  return 0;
}