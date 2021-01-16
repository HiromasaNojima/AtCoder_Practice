#include <bits/stdc++.h> 
using namespace std;

int main() {
    long long n = 0;
    cin >> n;

    for (int a = 1; a < 100; a++) {
        for (int b = 1; b < 100; b++) {
            long long threepow = 1;
            for (int i = 0; i < a; i++) {
                threepow *= 3;
            }

            long long fivepow = 1;
            for (int i = 0; i < b; i++) {
                fivepow *= 5;
            }

            long long sum = threepow + fivepow;
            if (sum == n) {
                cout << a << ' ' << b << endl;
                return 0;
            } else if (sum > n) {
                break;
            }
        }
    }

    cout << -1 << endl;
    return 0;
}