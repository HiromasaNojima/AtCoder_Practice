#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;

    set<string> freebie;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        freebie.insert(s);
    }

    cout << freebie.size() << endl;
    return 0;
}