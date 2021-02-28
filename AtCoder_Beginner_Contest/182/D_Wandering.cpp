#include <bits/stdc++.h> 
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> vec(n + 1, 0);
    long long maxvec = 0;
    long long point = 0;
    long long answer = 0;
    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        vec[i + 1] = vec[i] + a;
        maxvec = max(vec[i + 1], maxvec);
        answer = max(answer, point + maxvec);
        point += vec[i + 1];
    }

    cout << answer << endl;
    return 0;
}