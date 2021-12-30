#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long numerator(int n, int r) {
  long long ans = 1;
  for (int i = n; n - r < i; i--) {
    ans *= i;
  }
  return ans;
}

long long pow(int r) {
  long long ans = 1;
  for (int i = 1; i <= r; i++) {
    ans *= i;
  }
  return ans;
}

int main() {
  int n, r;
  cin >> n >> r;
  cout << numerator(n, r) / pow(r) << endl;
  return 0;
}