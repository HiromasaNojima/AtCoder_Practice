#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    set<int> s;
    rep (i, k) {
        int d;
        cin >> d;
        rep (i, d) {
            int a;
            cin >> a;
            s.insert(a);
        }
    }

    cout << n - s.size() << endl;
    return 0;
}