#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
long long mod = 1000000007;
 
long long modpow(long long a, long long n) {
  long long res = 1;
  while (n > 0) {
      if (n & 1) res = res * a % mod;
      a = a * a % mod;
      n >>= 1;
  }
  return res;
}


int main() {
  long long n, k;
  cin >> n >> k;
  if (k == 1) {
  cout << (n == 1 ? 1 : 0) << endl;
  	}
  else if (n == 1) {
  cout << k % mod << endl;
  }
  else if (n == 2) {
    cout << k * (k - 1ll) % mod << endl;
  }
  else {
  cout << k * (k - 1ll) % mod * modpow(k - 2ll, n - 2ll) % mod << endl;
  }

  return 0;
}