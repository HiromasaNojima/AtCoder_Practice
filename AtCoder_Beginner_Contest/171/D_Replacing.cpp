#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, q;
    cin >> n;
    long long answer = 0;
    vector<int> nums(100010, 0);
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        nums[temp]++;
        answer += temp;
    }

    cin >> q;
    int b, c;
    for (int i = 0; i < q; i++) {
        cin >> b >> c;
        int temp = nums[b];
        nums[b] = 0;
        nums[c] += temp;
        answer += (c - b) * temp;
        cout << answer << endl;
    }

    return 0;
}