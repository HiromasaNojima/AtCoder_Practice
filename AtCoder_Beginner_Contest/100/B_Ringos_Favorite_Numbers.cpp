#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int d, n;
    cin >> d >> n;
    if (d == 0) {
        if (n == 100) {
            cout << 101 << endl;
        } else {
            cout << n << endl;
        }
    } else if (d == 1) {
        if (n == 100) {
            cout << 10100 << endl;
        } else {
            cout << n * 100 << endl;
        }
    } else {
        if (n == 100) {
            cout << 1010000 << endl;
        } else {
            cout << n * 10000 << endl;
        }
    }
    
    return 0;
} 