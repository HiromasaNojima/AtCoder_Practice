#include <bits/stdc++.h> 
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<int> routes(n);
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            routes[i] = abs(k - vec[i]) + vec[0];
            break;
        }
        routes[i] = vec[i + 1] - vec[i];
    }

    sort(routes.begin(), routes.end());

    int answer = 0;
    for (int i = 0; i < n - 1; i++) {
        answer += routes[i];
    }

    cout << answer << endl;
    return 0;
}