#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, k;
  cin >> n >> k;
  map<int, int> m;
  vector<int> v(n);
  int ans = 0;
  int now = 0;
  rep(i, n) {
    cin >> v[i];
    if(i < k) {
      if(m.find(v[i]) == m.end()) {
        ans++;
        now++;
      }
      m[v[i]]++;
    }
  }

  int l = 0;
  int r = k;
  for(int i = k; i < n; i++) {
    int remove = v[l];
    int count = m[remove];
    if(--m[v[l]] == 0) {
      now--;
    }
    l++;
    if(++m[v[r]] == 1) {
      now++;
    }
    r++;

    ans = max(now, ans);
  }

  cout << ans << endl;
  return 0;
}