#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i].second >> vec[i].first;
    }

    sort(vec.begin(), vec.end());

    int now = 0;
    for (int i = 0; i < n; i++) {
        now += vec[i].second;
        if (now > vec[i].first) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}