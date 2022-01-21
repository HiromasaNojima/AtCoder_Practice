#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<long long> vec(401, 0);
    rep(i, n) {
      int a;
      cin >> a;
      ++vec[a + 200];
    }

    long long ans = 0;
    for(long long i = 1; i <= 400; i++) {
      for(long long j = 0; j <= i - 1; j++) {
        if (vec[i] != 0 && vec[j] != 0) {
          ans += (i - j) * (i - j) * (vec[j] * vec[i]);
        }
      }
    }

    cout << ans << endl;
    return 0;
}