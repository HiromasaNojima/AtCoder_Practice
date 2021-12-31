#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  double n;
  cin >> n;
  double answer;
  for (double i = 1; i <= n; i++) {
    answer += n / i;
  }

  cout << setprecision(12) << answer << endl;
}