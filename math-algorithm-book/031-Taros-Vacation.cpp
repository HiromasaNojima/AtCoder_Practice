#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  long long a[n + 1], b[n + 2];
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  b[0] = 0;
  b[1] = a[1];
  long long answer = max(b[0], b[1]);
  for (int i = 2; i <= n; i++) {
    b[i] = max(b[i - 1], b[i - 2] + a[i]);
    answer = max(answer, b[i]);
  }

  cout << answer << endl;
  return 0;
}