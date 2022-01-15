#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long n, k;
  cin >> n >> k;
  vector<long long> a(n);
  vector<long long> b(n);
  rep(i, n) {
    cin >> a[i];
  }

  rep(i, n) {
    cin >> b[i];
  }

  long long diff = 0;
  rep(i, n) {
    diff += abs(a[i] - b[i]);
  }

  if (diff > k) {
    cout << "No" << endl;
    return 0;
  }

  diff -= k;
  if (diff % 2 == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}