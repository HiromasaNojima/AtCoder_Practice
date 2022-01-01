#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int cards[62];
bool dp[10010][10010];

int main() {
  int n, s;
  cin >> n >> s;

  for(int i = 1; i <= n; i++) {
    cin >> cards[i];
  }

  dp[0][0]=true;
  for(int i = 1; i <= n; i++) {
    for (int j = 1; j <= s; j++) {
      bool notChoose = dp[i - 1][j];
      bool choose = false;
      if (j - cards[i] >= 0) {
        choose = (cards[i] == j || dp[i - 1][j - cards[i]]);
      }
      dp[i][j] = (notChoose || choose);
    }
  }

  if (dp[n][s]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}