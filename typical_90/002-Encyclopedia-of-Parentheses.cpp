#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  if (n % 2 != 0) {
    return 0;
  }

  queue<vector<char>> q;
  for (int bit = 0; bit < (1<<n); ++bit) {
    vector<char> v(n);
    for (int i = 0; i < n; i++) {
      int pos = n - i - 1;
      if (bit & (1 << i)) {
        v[pos] = ')';
      } else {
        v[pos] = '(';
      }
    }
    q.push(v);
  }
 
  rep(i, q.size()) {
    vector<char> v = q.front();
    q.pop();

    int countLeft = 0;
    bool ng = false;
    rep(i, n) {
      char kakko = v[i];
      if (kakko == '(') {
        countLeft++;
      } else {
        countLeft--;
      }

      if (countLeft < 0) {
        ng = true;
        break;
      }
    }

    if (ng) {
      continue;
    }

    if (countLeft == 0) {
      rep(i, n) cout << v[i];
      cout << endl;
    }
  }
  return 0;
}