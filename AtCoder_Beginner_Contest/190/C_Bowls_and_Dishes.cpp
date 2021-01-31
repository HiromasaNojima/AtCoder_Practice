#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m;
    vector<pair<int, int>> vec(m);
    for (int i = 0; i < m; i++) {
        cin >> vec[i].first >> vec[i].second;
    }

    cin >> k;
    vector<pair<int, int>> choices(k);
    for (int i = 0; i < k; i++) {
        cin >> choices[i].first >> choices[i].second;
    }

    int answer = 0;
    for (int bit = 0; bit < (1 << k); bit++) {
        vector<int> balls(101, 0);
        for (int i = 0; i < k; i++) {
            if (bit & (1 << i)) {
                balls[choices[i].first]++;
            } else {
                balls[choices[i].second]++;
            }
        }
        
        int temp_answer = 0;
        for (int i = 0; i < m; i++) {
            if (balls[vec[i].first] != 0 && balls[vec[i].second] != 0) {
                temp_answer++;
            }
        }

        answer = max(answer, temp_answer);
    }

    cout << answer << endl;
    return 0;
}