#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<vector<int>> books(n, vector<int>(m));
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
        for (int j = 0; j < m; j++) {
            cin >> books[i][j];
        }
    }

    int answer = 10000000;
    for (int bit = 0; bit < (1 << n); bit++) {
        int temp = 0;
        vector<int> statuses(m);
        for (int i = 0; i < n; i++) {
            if (bit & (1 << i)) {
                temp += prices[i];
                for (int j = 0; j < m; j++) {
                    statuses[j] += books[i][j];
                }
            }
        }

        bool can_master = true;
        for (int status : statuses) {
            if (status < x) {
                can_master = false;
            }
        }

        if (can_master) {
            answer = min(answer, temp);
        }
    }

    if (answer == 10000000) {
        cout << -1 << endl;
    } else {
       cout << answer << endl;
    }

    return 0;
}