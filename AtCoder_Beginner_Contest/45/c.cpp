#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s;
  cin >> s;
  long long ans = stoll(s);
  for (int bit = 0; bit < (1 << (s.size() - 1)); bit++) {
    vector<int> pluspos;
    for (int i = 0; i < s.size() - 1; i++) {
      if (bit & (1 << i)) {
        pluspos.push_back(i + 1); 
      }
    }

    int pos = 0;
    rep(i, pluspos.size()) {
      long long trim = stoll(s.substr(pos, pluspos[i] - pos));
      ans += trim;
      pos = pluspos[i];

      if (i == pluspos.size() - 1) {
        ans += stoll(s.substr(pos, s.size() - pos));
      }
    }
  }

  cout << ans << endl;
  return 0;
}