#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  long long h, w;
  cin >> h >> w;

  if (w == 1 || h == 1) {
    cout << 1 << endl;
    return 0;
  }

  long long odd = (h * w) % 2;
  if (odd) { 
    cout << ((h * w) / 2) + 1 << endl;
  } else {
    cout << (h * w) / 2 << endl;
  }

  return 0;
}