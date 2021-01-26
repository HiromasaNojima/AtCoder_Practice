#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, x, t;
    cin >> n >> x >> t;
    int count = 0;


    if (n % x == 0) {
        count = n / x;
    } else {
        count = n / x + 1;
    }
    
    cout << count * t << endl;
    return 0;
}