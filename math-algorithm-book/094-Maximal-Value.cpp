#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long n;
  cin >> n;

  vector<int> a(n);
  vector<int> b(n-1);
  for (int i = 0; i < n - 1; i++) {
    cin >> b[i];
  }

  if (n == 2) {
    cout << b[0] * 2 << endl;
    return 0;
  }

  if (b[0] <= b[1]) {
    a[0] = b[0];
    a[0 + 1] = b[0];
  } else {
    a[0] = b[0];
    a[1] = b[1];
  }
  long long ans = a[0] + a[1];

  for(int i = 2; i < n - 1; i++) {
    if (b[i] <= b[i-1]) {
      a[i] = b[i];
    } else {
      a[i] = b[i-1];
    }
    ans += a[i];
  }

  ans += b[n-2];

  cout << ans << endl;
  return 0;
}