#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long n;
    cin >> n;
    long long ans = 0;
    for (int i = 1; i < 1101101; i++) {
        string s = to_string(i);
        string doubled = s + s;
        if (stoll(doubled) > n) {
            break;
        }
        ans++;
    }

    cout << ans << endl;
    return 0;
}