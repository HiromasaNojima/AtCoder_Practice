#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> vec;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    vec.push_back(b);
    vec.push_back(a - b);
  }

  sort(vec.begin(), vec.end());
  long long ans = 0;
  for (int i = 1; i <= k; i++) {
    ans += vec[vec.size() - i];
  }

  cout << ans << endl;
  return 0;
}