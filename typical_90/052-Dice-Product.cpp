#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
long long mod = 1000000007;

int main() {
  int n;
  cin >> n;
  vector<vector<long long>> vec(n, vector<long long>(6));
  rep(i, n) {
    rep(j, 6) {
      cin >> vec[i][j];
    }
  }

  long long ans = 1;
  rep(i, n) {
    long long temp = vec[i][0] + vec[i][1] + vec[i][2] + vec[i][3] + vec[i][4] + vec[i][5];
    ans *= temp;
    ans %= mod;
  }

  cout << ans << endl;
}