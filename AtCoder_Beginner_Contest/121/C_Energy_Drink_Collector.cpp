#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<long long, long long>> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i].first >> vec[i].second;
    }

    sort(vec.begin(), vec.end());

    long long answer = 0;
    int now = 0;
    for (int i = 0; i < n; i++) {
        if (now + vec[i].second <= m) {
            answer += vec[i].first * vec[i].second;
            now += vec[i].second;
        } else {
            int diff = m - now;
            answer += vec[i].first * diff;
            break;
        }
    }

    cout << answer << endl;
    return 0;
}