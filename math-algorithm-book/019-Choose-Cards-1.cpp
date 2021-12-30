#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long numerator(int n, int r) {
  long long ans = 1;
  for (int i = n; n - r < i; i--) {
    ans *= i;
  }
  return ans;
}

long long pow(int r) {
  long long ans = 1;
  for (int i = 1; i <= r; i++) {
    ans *= i;
  }
  return ans;
}

int main() {
  long long n;
  cin >> n;
  long long red=0, yellow=0, blue=0;
  rep(i, n) {
    int color;
    cin >> color;
    if (color == 1) {
      red++;
    } else if (color == 2) {
      yellow++;
    } else {
      blue++;
    }
  }

  long long redCombination = numerator(red, 2) / pow(2);
  long long yellowCombination = numerator(yellow, 2) / pow(2);
  long long blueCombination = numerator(blue, 2) / pow(2);

  cout << redCombination + yellowCombination + blueCombination << endl;
  return 0;
}