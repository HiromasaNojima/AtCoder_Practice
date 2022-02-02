#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n,m; cin >> n >> m;
    vector<vector<int>> b(n, vector<int>(m));
    rep(i, n)rep(j, m) cin >> b[i][j];
    vector<vector<int>> x(n, vector<int>(m)), y(n, vector<int>(m));
    rep(i, n) {
      rep(j, m) {
        x[i][j] = (b[i][j]+6)/7;
        y[i][j] = (b[i][j]-1)%7+1;
      }
    }
    string ans = "Yes";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(0 < i && x[i][j] != x[i-1][j]+1) ans = "No";
            if(0 < j && y[i][j] != y[i][j-1]+1) ans = "No";
            if(0 < j && x[i][j] != x[i][j-1]) ans = "No";
            if(0 < i && y[i][j] != y[i-1][j]) ans = "No";
        }
    }
    cout << ans << endl;
    return 0;
}