#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<vector<int>> vec(n, vector<int>(n));
  rep (i, n) {
    rep (j, n) {
      cin >> vec[i][j];
    }
  }

  vector<int> p(n);
  rep(i, n) {
    p[i] = i;
  }

  vector<vector<bool>> ban(n, vector<bool>(n, false));
  int m;
  cin >> m;
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    ban[a][b] = true;
    ban[b][a] = true;
  }

  int ans = 10000000;
  do {
    int sum = 0;
    int now = p[0];
    bool ok = true;
    sum = vec[now][0];
    for (int i = 1; i < n; i++) {
      int pre = now;
      now = p[i]; 
      if (ban[pre][now]) {
        ok = false;
        break;
      }
      sum += vec[now][i];
    }

    if (ok) {
      ans = min(ans, sum);
    }

  } while (next_permutation(p.begin(), p.end()));
  
  if (ans == 10000000) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }

  return 0;
}