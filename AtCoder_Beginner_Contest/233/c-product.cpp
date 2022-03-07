#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<vector<int>> v;

int ans, n;
long long x;

void dfs(int i, long long seki) {
  if(i == n) {
    if(seki == x) {
      ans++;
    }
    return;
  }

  rep(j, v[i].size()) {
    if (seki > x/v[i][j]) {
      continue;
    }
    dfs(i + 1, seki * v[i][j]);
  }
}

int main() {
  cin >> n >> x;
  v = vector<vector<int>>(n);
  rep(i, n) {
    int l;
    cin >> l;
    v[i] = vector<int>(l);
    rep(j, l) {
      cin >> v[i][j];
    }
  }

  dfs(0, 1);
  cout << ans << endl;
  return 0;
}