#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  long long k, x;
  cin >> n >> k >> x;
  vector<long long> a(n);
  rep(i, n) {
    cin >> a[i];
  }

  rep(i, n) {
    long long multiply = a[i] / x;
    if(k - multiply >= 0) {
      k -= multiply;
      if(a[i] % x == 0) {
        a[i] = 0;
      } else {
        a[i] -= (multiply * x);
      }
    } else {
      a[i] -= (x * k);
      k = 0;
      break;
    }
  }

  sort(a.rbegin(), a.rend());
  long long ans = 0;
  for(int i = k; i < n; i++) ans += a[i];
  cout << ans << endl;
  return 0;
}