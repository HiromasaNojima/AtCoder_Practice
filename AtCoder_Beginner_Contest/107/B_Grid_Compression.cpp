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

    vector<bool> row(h);
    rep(i, h) {
        bool is_black = false;
        rep(j, w) {
            if (vec[i][j] == '#') {
                is_black = true;
            }
        }

        row[i] = is_black;
    }

    vector<bool> col(w);
    rep(i, w) {
        bool is_black = false;
        rep(j, h) {
            if (vec[j][i] == '#') {
                is_black = true;
            }
        }

        col[i] = is_black;
    }

    vector<vector<char>> ans;
    rep(i, h) {
        if (!row[i]) continue;
        vector<char> temp;
        rep (j, w) {
            if (!col[j]) continue;
            temp.push_back(vec[i][j]);
        }

        ans.push_back(temp);
    }

    for (vector<char> chars : ans) {
        for (char c : chars) {
            cout << c;
        }

        cout << endl;
    }

    return 0;
}