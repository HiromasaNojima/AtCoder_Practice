#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long long x, y;
    cin >> x >> y;
    int count = 0;
    while(x <= y) {
        x *= 2;
        count++;
    }

    cout << count << endl;
    return 0;
}