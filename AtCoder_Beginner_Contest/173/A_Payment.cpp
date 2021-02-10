#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 1000 == 0) {
        cout << 0 << endl;
        return 0;
    }

    n = n - 1000 * (n / 1000 + 1);
    cout << abs(n) << endl;
    return 0;
}