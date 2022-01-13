#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long n;
  cin >> n;

  long long ans = 100000000000000000;
  for (long long i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      long long div = n / i;
      long long temp = div * 2 + i * 2;
      ans = min(temp, ans);
    }
  }

  cout << ans << endl;
  return 0;
}