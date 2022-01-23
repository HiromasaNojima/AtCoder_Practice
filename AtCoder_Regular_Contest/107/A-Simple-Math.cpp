#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
long long mod = 998244353;

int main() {
  long long a, b, c;
  cin >> a >> b >> c;
  a = a * (a + 1);
  a /= 2;
  a %= mod;

  b = b * (b + 1);
  b /= 2;
  b %= mod;

  c = c * (c + 1);
  c /= 2;
  c %= mod;

  cout << (((a * b) % mod) * c) % mod << endl;
  return 0;
}
