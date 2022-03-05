#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<vector<char>> v(n, vector<char>(n));
  rep(i,n) rep(j, n) cin >> v[i][j];

  rep(i,n) {
    rep(j, n) {
      // yoko
      int count = 0;
      int ng = false;
      rep(k, 6) {
        int cur = j + k;
        if (cur >= n) {
          ng = true;
          break;
        }
        if(v[i][cur] == '#'){
         count++;
        }
      }
      if(!ng && count >= 4) {
        cout << "Yes" << endl;
        return 0;
      }
      
      count = 0;
      ng = false;
      // tate
      rep(k, 6) {
        int cur = i + k;
        if (cur >= n) {
          ng = true;
          break;
        }
        if(v[cur][j] == '#'){
         count++;
        }
      }
      if(!ng && count >= 4) {
        cout << "Yes" << endl;
        return 0;
      }

      // nanamesita
      count = 0;
      ng = false;
      rep(k, 6) {
        int x = j + k;
        int y = i + k;
        if(x >= n || y >= n) {
          ng = true;
          break;
        } 
        if (v[x][y] == '#') {
          count++;
        }
      }

      if(!ng && count >= 4) {
        cout << "Yes" << endl;
        return 0;
      }

      // nanameue
      count = 0;
      ng = false;
      rep(k, 6) {
        int x = j + k;
        int y = i - k;
        if(x >= n || y < 0) {
          ng = true;
          break;
        } 
        if (v[x][y] == '#') {
          count++;
        }
      }

      if(!ng && count >= 4) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}