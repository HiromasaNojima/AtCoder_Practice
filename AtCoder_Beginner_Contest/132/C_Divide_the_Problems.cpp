#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    if (n % 2 != 0) {
        cout << 0 << endl;
        return 0;
    }
    
    vector<int> vec(n);
    rep(i, n) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());
    int div2 = n / 2;
    
    cout <<  vec[div2] - vec[--div2] << endl;
    return 0;
}