#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    if (k <= a) {
        cout << k << endl;
        return 0; 
    }
    
    if (k <= a + b) {
        cout << a << endl;
        return 0;
    }

    int rest = k - (a + b);
    cout << a - rest << endl;
    return 0;
}