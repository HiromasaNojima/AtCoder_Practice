#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
long long mod = 1000000007;
 
int main() {
  int n, q;
  cin >> n >> q;
  vector<long long> a(n + 1);
  vector<long long> diff(n + 1, 0);
  cin >> a[1];
  long long ans = 0;
  for(int i = 2; i <= n; i++) {
    cin >> a[i];
    diff[i - 1] = a[i] - a[i-1];
    ans += abs(diff[i - 1]);
  }
 
  vector<long long> answeres;
  rep(i, q) {
    long long l, r, v;
    cin >> l >> r >> v;
 
    if (l != 1) {
      long long old = diff[l - 1];
      diff[l-1] += v;
      long long newer = diff[l - 1];
      ans += abs(newer) - abs(old);
    }
 
    if (r != n) {
      long long old = diff[r];
      diff[r] -= v;
      long long newer = diff[r];
      ans += abs(newer) - abs(old);
    }
 
    answeres.push_back(ans);
  }
 
  rep(i, answeres.size()) cout << answeres[i] << endl;
  return 0;
}