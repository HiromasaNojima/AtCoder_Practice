#include <bits/stdc++.h> 
using namespace std;

int main() {
    long long n,k = 0;
    cin >> n >> k;

    cout << min(n % k, abs(n % k - k)) << endl;
    return 0;
}