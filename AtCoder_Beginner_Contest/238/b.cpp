#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i, n) cin >> v[i];

  vector<int> ans(n);
  int cur = 0;
  rep(i, n) {
    cur += v[i];
    cur %= 360;
    ans.push_back(cur);
  }

  sort(ans.begin(), ans.end());
  int answer = -1;
  rep(i, ans.size()) {
    if(i == ans.size() - 1) {
      int last = 360 - ans[i];
      answer = max(answer, last);
    } else {
      answer = max(answer, ans[i + 1] - ans[i]);
    }
  }

  cout << answer << endl;
  return 0;
}