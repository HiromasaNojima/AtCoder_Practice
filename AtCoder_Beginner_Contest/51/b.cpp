#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int k, s;
  cin >> k >> s;
  int count = 0;
  for (int x = 0; x <= k; x++) {
    for (int y = 0; y <= k; y++) {
      if(0 <= s - (x + y) && s - (x + y) <= k) {
        count++;
      }
    }
  }

  cout << count << endl;
  return 0;
}