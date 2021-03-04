#include <bits/stdc++.h> 
using namespace std;

long long GCD(long long a, long long b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
}

int main() {
    int k;
    cin >> k;
    int answer = 0;
    for (int a = 1; a <= k; a++) {
        for (int b = 1; b <= k; b++) {
            int gcd = GCD(max(a, b), min(a, b));
            for (int c = 1; c <= k; c++) {
                answer += GCD(max(gcd, c), min(gcd, c));
            }
        }
    }

    cout << answer << endl;
    return 0;
}