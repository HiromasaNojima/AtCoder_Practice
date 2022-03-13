#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> v;
  rep(i, n) {
    int a;
    cin >> a;
    v.push_back(a);
  }

  sort(v.begin(), v.end());
  vector<int> ans;
  rep(i, q) {
    int x;
    cin >> x;
    auto itr = lower_bound(v.begin(), v.end(), x);
    if(itr == v.end()) {
      ans.push_back(0);
    } else {
      ans.push_back(distance(itr, v.end()));
    }
  }
  rep(i, q) cout << ans[i] << endl;
  return 0;
}