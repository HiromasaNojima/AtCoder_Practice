#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  multiset<long long> s;
  vector<long long> ans;
  rep(i, n) {
    int a;
    cin >> a;
    if(a == 1) {
      long long b;
      cin >> b;
      s.insert(b);
    } else if(a == 2) {
      long long b, c;
      cin >> b >> c;
      bool ng = false;
      if(s.empty()) {
        cout << -1 << endl;
        continue;
      }

      auto itr = s.upper_bound(b);
      rep(i, c) {
        if(itr == s.begin()) {
          ng = true;
          break;
        }
        itr--;
      }

      if (ng) {
        cout << -1 << endl;
      } else {
        cout << *itr << endl;
      }
    } else if(a == 3) {
      long long b, c;
      cin >> b >> c;
      if(s.empty()) {
        cout << -1 << endl;
        continue;
      }

      auto itr = s.lower_bound(b);
      c--;

      rep(i, c) {
        if(itr == s.end()) {
          break;
        }
        itr++;
      }
      if(itr == s.end()) {
        cout << -1 << endl;
      } else {
        cout << *itr << endl;
      }
    }
  }

  return 0;
}