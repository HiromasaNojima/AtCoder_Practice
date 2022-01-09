#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int a[100009], b[100009];
vector<int> g[200009];

int main() {
  int n;
  cin >> n;
  vector<long long> waza(n + 1, 0);
  for(int i = 1; i <= n; i++) {
    int k;
    cin >> waza[i] >> k;
    for(int j = 1; j <= k; j++) {
      int a;
      cin >> a;
      g[i].push_back(a);
    }
  }

  vector<bool> need(n + 1, false);
  need[n] = true;
  for(int i = n; 0 < i; i--) {
    if(need[i]) {
      rep(j, g[i].size()) {
        need[g[i][j]] = true;
      }
    }
  }

  long long ans = 0;
  for(int i = 1; i <= n; i++) {
    if(need[i]) {
      ans += waza[i];
    }
  }

  cout << ans << endl;
  return 0;
}