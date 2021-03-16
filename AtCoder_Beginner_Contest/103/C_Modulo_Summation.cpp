#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    long long answer = 0;
    rep (i, n) {
        long long temp;
        cin >> temp;
        answer += --temp;
    }

    cout << answer << endl;
    return 0;
}