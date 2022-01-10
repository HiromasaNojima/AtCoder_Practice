#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<long long> a(n);
  vector<long long> b(n);
  rep(i, n) {
    cin >> a[i];
  }

  rep(i, n) {
    cin >> b[i];
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  long long answer = 0;
  rep(i, n) {
    answer += abs(a[i] - b[i]);
  }

  cout << answer << endl;
  return 0;
}