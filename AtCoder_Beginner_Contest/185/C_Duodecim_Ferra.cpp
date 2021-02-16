#include <bits/stdc++.h> 
using namespace std;

int main() {
    long long n;
    cin >> n;
    n -= 12;
    long long answer = 1;
    vector<bool> vec(12, true);
    for (int i = 1; i <= 11; i++) {
        answer *= (n + 11 - i + 1);
        answer /= i;
    }

    cout << answer << endl;
    return 0;
}