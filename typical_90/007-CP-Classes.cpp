#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, q;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  cin >> q;
  vector<int> b(q);
  rep(i, q) cin >> b[i];

  sort(a.begin(), a.end());
  rep(i, q) {
    auto it = lower_bound(a.begin(), a.end(), b[i]);
    if (*it == b[i]) {
      cout << 0 << endl;
      continue;
    }

    int pos = it - a.begin();
    if (0 < pos) {
      cout << min(abs(*it - b[i]), abs(a[pos - 1] - b[i])) << endl;
    } else {
      cout << abs(*it - b[i]) << endl;
    }
  }
  return 0;
}