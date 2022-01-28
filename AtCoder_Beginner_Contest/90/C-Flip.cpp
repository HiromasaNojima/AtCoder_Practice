#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long n, m;
  cin >> n >> m;

  if (n == 1ll && m == 1ll) {
    cout << 1 << endl;
  } else if (n == 1ll && m != 1ll) {
    cout << m - 2ll << endl;
  } else if (n != 1ll && m == 1ll) {
    cout << n - 2ll << endl;
  } else { 
    cout << (n - 2ll) * (m - 2ll) << endl;
  }
  return 0;
}