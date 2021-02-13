#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    sort(a.begin(), a.end());
    sort(c.begin(), c.end());

    long long answer = 0;
    for (int i = 0; i < n; i++) {
        long long a_count = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
        long long c_count = c.end() - upper_bound(c.begin(), c.end(), b[i]);
        answer += a_count * c_count;
    }

    cout << answer << endl;
    return 0;
}