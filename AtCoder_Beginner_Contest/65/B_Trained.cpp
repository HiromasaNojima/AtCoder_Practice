#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, n) {
        cin >> vec[i];
    }

    int now = vec[0];
    int count = 1;
    bool exist = false;
    rep(i, n) {
        now--;
        if (now == 1) {
            exist = true;
            break;
        }

        now = vec[now];
        
        count++;
    }

    if (exist) {
        cout << count << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}