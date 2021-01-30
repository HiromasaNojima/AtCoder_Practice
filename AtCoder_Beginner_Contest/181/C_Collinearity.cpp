#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);
    for (int i = 0 ; i < n; i++) {
        cin >> vec[i].first >> vec[i].second;
    }

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int x1 = vec[j].first - vec[i].first;
                int x2 = vec[k].first - vec[j].first;
                int y1 = vec[j].second - vec[i].second;
                int y2 = vec[k].second - vec[j].second;
                if (x2 * y1 == x1 * y2){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}