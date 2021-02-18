#include <bits/stdc++.h> 
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<char> vec;
    while (n) {
        n--;
        int mod = n % 26 + 97;
        vec.push_back(mod);
        n /= 26;
    }

    reverse(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++) {
        char c = vec[i];
        cout << c;
    }

    cout << endl;
    return 0;
}