#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n = 0;
    cin >> n;

    vector<int> upper(n);
    vector<int> lower(n);
    for (int i = 0; i < n; i++) {
        cin >> upper[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> lower[i];
    }

    vector<long long> sum_upper(n+1, 0);
    reverse(lower.begin(), lower.end());
    vector<long long> sum_lower_reversed(n+1, 0);
    for (int i = 0; i < n; i++) {
        sum_upper[i + 1] = sum_upper[i] + upper[i];
        sum_lower_reversed[i + 1] = sum_lower_reversed[i] + lower[i];
    }

    int max = 0;
    for (int i = 0; i < n; i++) {
        if (sum_upper[i + 1] + sum_lower_reversed[n - i] > max) {
            max = sum_upper[i + 1] + sum_lower_reversed[n - i];
        }
    }

    cout << max << endl;
    return 0;
}