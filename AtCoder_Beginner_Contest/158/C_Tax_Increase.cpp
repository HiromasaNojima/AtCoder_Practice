#include <bits/stdc++.h> 
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= 10000; i++) {
        double num8 = ceil(i * 8 / 100);
        double num10 = ceil(i * 10 / 100);
        if (num8 == a && num10 == b) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}