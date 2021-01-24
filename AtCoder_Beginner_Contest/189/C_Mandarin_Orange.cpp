#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> vec(n);

    for (int i = 0; i < n; i ++) {
        cin >> vec[i];
    }

    long long answer = 0;
    for (int i = 0; i < n; i++) {
        long long  minimum = vec[i];
        long long count = 0;
        for (int j = i; j < n; j++) {
            count++;
            minimum = min(minimum, vec[j]);
            answer = max(answer, (minimum * count));
        }
    }

    cout << answer << endl;
    return 0;
}