#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool isPrime(int num) {
  for(int i = 2; i * i <= num; i++) {
    if (num % i == 0) return false;
  }
  return true;
}

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int ans = 0;
  for(int i = a; i <= b; i++) {
    for(int j = c; j <= d; j++) {
      if(isPrime(i + j)) {
        ans++;
        break;
      }
    }
  }

  if(b - a + 1 == ans) {
    cout << "Aoki" << endl;
  } else {
    cout << "Takahashi" << endl;
  }

  return 0;
}