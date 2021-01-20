#include <bits/stdc++.h> 
using namespace std;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    long long answer = 0;
    for (int i = 0; i < min(x, y); i++) {
        if (a + b > 2 * c) {
            answer += 2 * c;
        } else {
            answer += a + b;
        }
    }

    int tanka = 0;
    if (x == max(x, y)) {
        tanka = a;
    } else {
        tanka = b;
    }
    for (int i = min(x, y); i < max(x, y); i++) {
        if (tanka > 2 * c) {
            answer += 2 * c;
        } else {
            answer += tanka;
        }
    }

    cout << answer << endl;
    return 0;
}