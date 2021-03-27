#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    int mosyo = 0;
    int manatu = 0;
    int natu = 0;
    int netttai = 0;
    int huyu = 0;
    int mahuyu = 0;
    rep (i, n) {
        double mint, maxt;
        cin >> maxt >> mint;

        if (maxt >= 35) {
            mosyo++;
        }

        if (maxt >= 30 && maxt < 35) {
            manatu++;
        }

        if (maxt >= 25 && maxt < 30) {
            natu++;
        }

        if (mint >= 25) {
            netttai++;
        }

        if (mint < 0 && maxt >= 0) {
            huyu++;
        }

        if (maxt < 0) {
            mahuyu++;
        }
    }

    cout << mosyo << ' ' << manatu << ' ' << natu << ' ' << netttai << ' ' << huyu << ' ' << mahuyu << endl;
    return 0;
}