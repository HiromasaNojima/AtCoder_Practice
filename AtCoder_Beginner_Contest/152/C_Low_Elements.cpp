#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    int minval = 100100100;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int now;
        cin >> now;
        minval = min(minval, now);
        if (now <= minval) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}