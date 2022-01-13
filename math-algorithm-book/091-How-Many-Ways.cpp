#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, x;
  cin >> n >> x;

  int ans = 0;
  for(int a = 1; a <= n; a++) {
    for (int b = a + 1; b <= n; b++) {
      for (int c = b + 1; c <= n; c++) {
        if (a + b + c == x) {
          ans++;
        } 
      }
    }
  }

  cout << ans << endl;
  return 0;
}