#include <bits/stdc++.h> 
using namespace std;

int main() {
    string s;
    int q;
    cin >> s;
    cin >> q;
    deque<char> ss;
    for (int i = 0; i < s.size(); i++) {
        ss.push_back(s[i]);
    }
    int count = 0;
    for (int i = 0; i < q; i++) {
        int n;
        cin >> n;
        if (n == 1) {
            count++;
            continue;
        }

        cin >> n;
        char c;
        cin >> c;
        if (count % 2 == 0) {
            if (n == 1) {
                ss.push_front(c);
            } else {
                ss.push_back(c);
            }
        } else {
            if (n == 1) {
                ss.push_back(c);
            } else {
                ss.push_front(c);
            }
        }
    }

    if (count % 2 == 1) reverse(ss.begin(), ss.end());
    for (int i = 0; i < ss.size(); i++) {
        cout << ss[i];
    }

    cout << endl;
    return 0;
}