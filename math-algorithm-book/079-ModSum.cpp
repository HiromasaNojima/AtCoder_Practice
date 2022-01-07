#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long n;
  cin >> n;
  long long answer = 0;
  for (int i = 2; i <= n; i++) {
    if (i == n) {
      answer++;
      break;
    }

    answer += i;
  }

  cout << answer << endl;
  return 0;
}