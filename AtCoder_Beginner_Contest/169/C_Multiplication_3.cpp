#include <bits/stdc++.h> 
using namespace std;

int main() {
    long long a;
    double b;
    cin >> a >> b;
    long long b100 = round(b * 100);
    long long temp = a * b100;
    string s = to_string(temp);

    if (s.size() < 3) {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < s.size() - 2; i++) {
        cout << s[i];
    }

    cout << endl;
    return 0;
}