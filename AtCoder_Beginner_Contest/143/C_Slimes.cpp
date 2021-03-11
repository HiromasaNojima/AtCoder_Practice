#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    char pre = s[0];
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (pre != s[i]) {
            count++;
        }

        pre = s[i];
    }

    cout << count << endl;
    return 0;
}