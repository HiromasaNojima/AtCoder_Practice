#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
long long inf = LLONG_MAX;

int main() {
  long long n, a, b, p, q, r, s;
  cin >> n >> a >> b >> p >> q >> r >> s;
  for (long long i = p; i <= q; i++) {
    for (long long j = r; j <= s; j++) {
      char c = '.';
      if ((i - j) == (a - b) || (i + j) == (a + b)) {
        c = '#';
      }

      cout << c;
    }

    cout << endl;
  }

  return 0;
}
