#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> polls;
    int maxnum = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        polls[s]++;
        maxnum = max(maxnum, polls[s]);
    }

    for (auto poll : polls) {
        if (poll.second == maxnum) {
            cout << poll.first << endl;
        }
    }

    return 0;
}
