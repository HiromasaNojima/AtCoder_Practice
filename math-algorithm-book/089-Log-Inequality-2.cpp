#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long a, b, c;
  cin >> a >> b >> c;
  if (c == 1) {
    cout << "No" << endl;
    return 0;
  }

  long long val = c;
  for (int i = 1; i <= b; i++) {
    if (a < val) {
      cout << "Yes" << endl;
      return 0;
    }

    val *= c;
  }

}