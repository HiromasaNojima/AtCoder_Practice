#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    int pret = 0;
    int prex = 0;
    int prey = 0;
    rep(i, n) {
        int t, x, y;
        cin >> t >> x >> y;
        int time = t - pret;
        int distance = abs(x - prex) + abs(y - prey);
        if (distance > time) {
            cout << "No" << endl;
            return 0;
        }

        if ((time % 2 == 0 && distance % 2 != 0) || (time % 2 != 0 && distance % 2 == 0)) {
            cout << "No" << endl;
            return 0;
        }

        pret = t;
        prex = x;
        prey = y;
    }

    cout << "Yes" << endl;
    return 0;
}