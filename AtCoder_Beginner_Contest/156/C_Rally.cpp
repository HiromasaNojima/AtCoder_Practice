#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    long long answer = 1101101101101101010;
    sort(vec.begin(), vec.end());
    for (int i = vec.front(); i <= vec.back(); i++) {
        long long temp = 0;
        for (int j = 0; j < n; j++) {
            temp += abs(vec[j] - i) * abs(vec[j] - i);
        }
        answer = min(temp, answer);
    }

    cout << answer << endl;
    return 0;
}