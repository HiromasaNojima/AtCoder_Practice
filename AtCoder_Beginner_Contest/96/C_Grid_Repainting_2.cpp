#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<char>> vec(h, vector<char>(w));
    rep(i, h) {
        rep(j, w) {
            cin >> vec[i][j];
        }
    }

    rep(i, h) {
        rep(j, w) {
            if (vec[i][j] == '.') continue;

            if (j != 0) {
                if (vec[i][j - 1] == '#') continue; 
            }

            if (j != (w - 1)) {
                if (vec[i][j + 1] == '#') continue;
            }

            if (i != 0) {
                if (vec[i - 1][j] == '#') continue; 
            }

            if (i != (h - 1)) {
                if (vec[i + 1][j] == '#') continue;
            }

            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}