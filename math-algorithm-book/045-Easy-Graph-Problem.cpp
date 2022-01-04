#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int n, m, a[100009], b[100009];
vector<int> g[100009];

int main() {
  cin >> n >> m;
  for(int i = 1; i <= m; i++) {
    cin >> a[i] >> b[i];
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }

  int answer = 0;
  for (int i = 1; i <= n; i++) {
    int smaller = 0;
    for (int j = 0; j < g[i].size(); j++) {
      if (i > g[i][j]) smaller++;
    }

    if (smaller == 1) {
      answer++;
    }
  }

  cout << answer << endl;
  return 0;
}