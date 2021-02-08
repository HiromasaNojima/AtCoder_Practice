#include <bits/stdc++.h> 
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long answer = n;

    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            long long temp = i + n/i - 2;
            answer = min(temp, answer);
        }
    }

    cout << answer << endl;
    return 0;
}