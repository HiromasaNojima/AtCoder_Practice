#include <bits/stdc++.h> 
using namespace std;

long long a, b, x;

int ten(int num) {
    int keta = 0;
    while(num) {
        keta++;
        num = num / 10;
    }

    return keta;
}
 
int main() {
    cin >> a >> b >> x;

    int left = 0;
    int right = 1000000001;
    int mid;
    while (right - left > 1) {
        mid = (left + right) / 2;
        if (a * mid + b * ten(mid) > x) {
            right = mid;
        } else {
            left = mid;
        }
    }

    cout << left << endl;
    return 0;
}