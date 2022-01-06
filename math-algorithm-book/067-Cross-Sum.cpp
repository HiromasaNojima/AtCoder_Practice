#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  int h, w;
  cin >> h >> w;
  int cross[h][w];
  int gyouSum[h];
  vector<int> retusum(w,0);
  rep(i, h) {
    int sum = 0;
    rep(j, w) {
      int input;
      cin >> input;
      cross[i][j] = input;
      retusum[j] += input;
      sum += input;
    }
    gyouSum[i] = sum;
  }

  rep(i, h) {
    rep(j, w) {
      int sum = gyouSum[i] + retusum[j];
      sum -= cross[i][j];
      cout << sum;
      if (j == w - 1) {
        cout << endl;
      } else {
        cout << " ";
      }
    }
  }

  return 0;
}