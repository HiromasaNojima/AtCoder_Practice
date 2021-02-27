#include <bits/stdc++.h> 
using namespace std;


int solve (int x){
    long long l = 2;
    for (l; l * l <= x; l++){
        if (x % l == 0) break;
    }

    if (l * l <= x) {
        return solve(++x);
    }

    return x;
}

int main () {
    int x;
    cin >> x;
    cout << solve(x) << endl;
    return 0;
}