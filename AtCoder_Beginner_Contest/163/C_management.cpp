#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n, 0);
    for (int i = 1; i < n; i++) {
        int manager = 0;
        cin >> manager;
        manager--;
        vec[manager]++;
    }

    for (int answer : vec) {
        cout << answer << endl;
    }

    return 0;
}