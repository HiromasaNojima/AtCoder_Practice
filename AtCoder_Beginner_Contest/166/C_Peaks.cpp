#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, bool>> peaks(n);
    for (int i = 0; i < n; i++) {
        cin >> peaks[i].first;
        peaks[i].second = true;
    }

    int answer = n;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        if (peaks[a].first <= peaks[b].first && peaks[a].second) {
            peaks[a].second = false;
            answer--;
        }
        
        if (peaks[a].first >= peaks[b].first && peaks[b].second) {
            peaks[b].second = false;
            answer--;
        }
    }

    cout << answer << endl;
    return 0;
}