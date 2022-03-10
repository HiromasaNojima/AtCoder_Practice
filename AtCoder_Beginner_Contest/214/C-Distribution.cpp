#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int n;

int move(int cur) {
  if(cur < n - 1) {
    return ++cur;
  } else {
    return 0;
  }
}

int main() {
  cin >> n;
  vector<int> s(n);
  vector<int> ans(n, 2000000000);
  vector<int> t(n);
  rep(i, n) cin >> s[i];

  int start = 2000000000;
  int time = 2000000000;
  rep(i, n) {
    int temp;
    cin >> temp;
    t[i] = temp;
    if(temp < time) {
      time = temp;
      start = i;
    }
  }

  int cur = start;
  ans[cur] = t[cur];
  // cout << ans[cur] << endl;
  if(cur < n - 1) {
     cur++;
  } else {
    cur = 0;
  }

  rep(i, n - 1) {
    int pre;
    if(cur == 0) {
      pre = n - 1;
    } else {
      pre = cur - 1;
    }

    // cout << min(t[i], s[pre] + ans[pre]) << endl;
    ans[cur] = min(t[cur], s[pre] + ans[pre]);
    cur = move(cur);
  }

  rep(i, n) cout << ans[i] << endl;
  return 0;
}
