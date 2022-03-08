#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int x[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int y[8] = {2, 1, -1, -2, -2, -1, 1, 2};

int main() {
  int x1, x2, y1, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  rep(i, 8) {
    rep(j, 8) {
      int curx = x1 + x[i] + x[j];
      int cury = y1 + y[i] + y[j];
      if (curx == x2 && cury == y2) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}  
