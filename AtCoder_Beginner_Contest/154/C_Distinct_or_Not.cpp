#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    set<int> s;
    rep(i ,n) {
        int temp;
        cin >> temp;
        s.insert(temp);
    }

    if (s.size() == n) {
        cout << "YES" <<endl;
    } else {
        cout << "NO" <<endl;
    }
    
    return 0;
}