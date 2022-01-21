#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<long long> a(47, 0);
  vector<long long> b(47, 0);
  vector<long long> c(47, 0);
  rep (i, n) {
    int ai;
    cin >> ai;
    ai %= 46;
    a[ai]++;
  }
  rep (i, n) {
    int bi;
    cin >> bi;
    bi %= 46;
    b[bi]++;
  }
  rep (i, n) {
    int ci;
    cin >> ci;
    ci %= 46;
    c[ci]++;
  }
  
  long long ans = 0;
  rep(i, 47) {
    rep(j, 47) {
      rep(k, 47) {
        if ((i + j + k) % 46 == 0) {
          ans += a[i] * b[j] * c[k];
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}