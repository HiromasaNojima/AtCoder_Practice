#include <bits/stdc++.h> 
using namespace std;

int main() {
    int h, w, k;
    cin >> h >> w >> k;
    vector<vector<char>> vec(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> vec[i][j];
        }
    }

    int answer = 0;
    for (int bit = 0; bit < 1 << (h + w); bit++) {
        vector<vector<char>> copied = vec;
        for (int i = 0; i < h + w; i++) {
            if (bit & (1 << i)) {
                if (i < h) {
                    for (int j = 0; j < w; j++) {
                        copied[i][j] = '.';
                    }
                } else {
                    for (int j = 0; j < h; j++) {
                        copied[j][i - h] = '.';
                    }
                }
            }

        }

        int count = 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (copied[i][j] == '#') count++;
            }
        }

        if (count == k) answer++;
    }

    cout << answer << endl;
    return 0;
}