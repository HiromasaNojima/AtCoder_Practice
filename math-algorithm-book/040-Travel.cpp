#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<long long> a(n + 1, 0), sum(n + 1, 0);
  for (int i = 1; i <= n - 1; i++) {
    cin >> a[i];
    sum[i] = sum[i - 1] + a[i];
  }

  int m, now;
  cin >> m >> now;
  now--;
  long long answer = 0;
  rep(i, m - 1) {
    int next;
    cin >> next;
    next--;
    answer += abs(sum[next] - sum[now]);
    now = next;
  }

  cout << answer << endl;
}