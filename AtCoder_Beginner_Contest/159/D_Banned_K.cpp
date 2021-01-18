#include <bits/stdc++.h> 
using namespace std;


long long combination2(long long num) {
    return num * (num - 1 ) / 2;
}

int main() {
    int n = 0;
    cin >> n;
    vector<int> vec(n);
    vector<int> counts(n + 1);
    for (int i = 0; i < n; i++) {
        int val = 0;
        cin >> val;
        vec[i] = val;
        counts[val]++;
    }
    
    long long totalCombination = 0;
    for (int i = 1; i < n + 1; i++) {
        totalCombination += combination2(counts[i]);
    }

    for (int i = 0; i < n; i++) {
        long long answer = totalCombination;
        answer -= combination2(counts[vec[i]]);
        answer += combination2(counts[vec[i]] - 1);
        cout << answer << endl;
    }

    return 0;
}