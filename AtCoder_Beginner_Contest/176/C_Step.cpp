#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    long step = 0;
    int maximum = 0;
    for (int i = 0; i < n; i++) {
        int now;
        cin >> now;
        if (now < maximum) {
            step += maximum - now;
        }

        maximum = max(now, maximum);
    }

    cout << step << endl;
    return 0;
}