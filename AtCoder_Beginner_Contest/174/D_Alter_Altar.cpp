#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<char> vec(n);
    stack<int> rpos;
    rep (i, n) {
        char c;
        cin >> c;
        vec[i] = c;
        if (c == 'R') {
            rpos.push(i);
        }
        
    }

    int ans = 0;
    int right = n;
    rep (i, n) {
        if (vec[i] == 'W') {
            if (rpos.empty()){
                break;
            }

            int r = rpos.top();
            if (r < i) {
                break;
            }

            swap(vec[i], vec[r]);
            ans++;
            rpos.pop();
        }

    }

    cout << ans << endl;
    return 0;
}