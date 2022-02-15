#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int ans = INT_MAX;
  rep(i, n) {
    auto it = lower_bound(b.begin(), b.end(), a[i]);
    ans = min(ans, abs(a[i] - *it));
    int pos = distance(b.begin(), it);
    if(0 < pos) {
      pos--;
      ans = min(ans, abs(a[i] - b[pos]));
    }
  }

  cout << ans << endl;
  return 0;
}