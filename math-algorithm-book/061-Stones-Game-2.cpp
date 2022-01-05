#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long n;
  cin >> n;
  long long i = 1;
  while(true) {
    i = i << 1;
    if (n == i - 1) {
      cout << "Second" << endl;
      return 0;
    }

    if (n < i) {
      break;
    }
  }

  cout << "First" << endl;
  return 0;
}