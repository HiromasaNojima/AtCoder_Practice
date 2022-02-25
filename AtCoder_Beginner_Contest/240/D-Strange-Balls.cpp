#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

deque<pair<int, int>> d;

int main() {
  int n;
  cin >> n;
  vector<int>  a(n);
  rep(i, n) cin >> a[i];

  int count = 0;
  rep(i, n) {
    count++;

    if(d.size() == 0) {
      d.push_back(make_pair(a[i], 1));
      cout << count << endl;
      continue;
    }

    if(a[i] != d.back().first) {
      d.push_back(make_pair(a[i], 1));
    } else {
      d.back().second++;
      if(d.back().first == d.back().second) {
        count -= d.back().first;
        d.pop_back();
      }
    }
    cout << count << endl;
  }

  return 0;
}