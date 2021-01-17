#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    vector<long long> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());
    vector<long long> sum(n + 1, 0);
    for (int i = 0; i < n; i++) {
        sum[i + 1] = vec[i] + sum[i];
    }

    long long answer = 0;
    for (int i = 0; i < n; i++) {
        answer += vec[n - i - 1] * (n - i - 1) - sum[n - i - 1];
    }

    cout << answer << endl;
}