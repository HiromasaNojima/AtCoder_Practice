#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int t, n;
  cin >> t >> n;
  vector<long long> l(500009, 0), r(500009, 0), diff(500009, 0), sum(500009, 0);
  rep(i, n) {
    cin >> l[i] >> r[i];
  }

  rep(i, n) {
    diff[l[i]] += 1;
    diff[r[i]] -= 1;
  }

  sum[0] = diff[0];
  for (int i = 1; i <= t; i++) {
    sum[i] = diff[i] + sum[i - 1];
  }

  for (int i = 0; i < t; i++) {
    cout << sum[i] << endl;
  }

  return 0;
}