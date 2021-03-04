
#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());
    int answer = 0;
    for (int i = 0; i < k; i++) {
        answer += vec[i];
    }

    cout << answer << endl;
    return 0;
}