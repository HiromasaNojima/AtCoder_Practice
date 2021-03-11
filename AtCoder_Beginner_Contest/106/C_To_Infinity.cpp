#include <bits/stdc++.h> 
using namespace std;

int main() {
    string s;
    cin >> s;
    long long k;
    cin >> k;
    for (int i = 0; s.size(); i++) {
        if (i == k - 1) {
            cout << s[i] << endl;
            return 0;
        }

        if (s[i] - '0' > 1) {
            cout << s[i] << endl;
            return 0;
        }
    }
}