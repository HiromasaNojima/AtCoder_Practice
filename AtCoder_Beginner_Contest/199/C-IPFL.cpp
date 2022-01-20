#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n,q;
  string s;
  cin >> n >> s >> q;
  bool reveresed = false;
  rep(i, q) {
    int t, a, b;
    cin >> t >> a >> b;
    if (t == 1) { 
      if (reveresed) {
        if (a > n) {
          a -= n;
        } else {
          a += n;
        }
        if (b > n) {
          b -= n;
        } else {
          b += n;
        }

        a--;b--;
        swap(s[a], s[b]);
      } else {
        a--;b--;
        swap(s[a], s[b]);
      }
    } else {
      reveresed = !reveresed;
    }
  }

  if (reveresed) {
    rep(i, n) {
      cout << s[i + n];
    }

    rep(i, n) {
      cout << s[i];
    }

    cout << endl;
  } else {
    cout << s << endl;
  }

  return 0;
}