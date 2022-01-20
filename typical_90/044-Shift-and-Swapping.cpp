#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, q;
  cin >> n >> q;
  deque<int> a(n);
  rep(i, n) {
    cin >> a[i];
  }

  vector<int> ans;
  rep(i, q) {
    int t, x, y;
    cin >> t >> x >> y;
    if (t == 1) {
      x--;y--;
      swap(a[x], a[y]);
    } else if (t == 2) {
      int back = a.back();
      a.pop_back();
      a.push_front(back);
    } else {
      x--;
      ans.push_back(a[x]);
    }
  }

  rep(i, ans.size()) {
    cout << ans[i] << endl;
  }
  return 0;
}