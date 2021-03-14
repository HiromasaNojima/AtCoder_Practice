#include <bits/stdc++.h> 
using namespace std;

int main() {
    int a, b, w;
    cin >> a >> b >> w;
    w*=1000;
    int left = 1001001001;
    int right = 0;
    for (int i = 1; i <= w; i++) {
        if (i * a <= w && w <= i * b) {
            left = min(left, i);
            right = max(right, i);
        }
    }

    if (left == 1001001001 && right == 0) {
        cout << "UNSATISFIABLE" << endl;
    } else {
        cout << left << " " << right << endl;
    }

    return 0;
}