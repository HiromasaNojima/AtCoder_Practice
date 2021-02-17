#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> vec(n, 0);
    vector<bool> input(n, false);
    for (int i = 0; i < m; i++) {
        int s; 
        int c;
        cin >> s >> c;
        s--;
        if (!input[s]) {
            input[s] = true;
            vec[s] = c;
        } else {
            if (c != vec[s]) {
                cout << -1 << endl;
                return 0;
            }
        }
    }

    if (vec[0] == 0 && input[0] && n >= 2) {
        cout << -1 << endl;
        return 0;
    }

    if (n >= 2 && vec[0] == 0) {
        vec[0] = 1;
    }

    bool can_out = false;
    int keta = 1;
    int answer = 0;
    for (int i = n - 1; i >= 0; i--) {
        answer += vec[i] * keta;
        keta *= 10;
    }

    cout << answer << endl;
    return 0;
}