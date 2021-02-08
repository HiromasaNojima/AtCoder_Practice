#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<int> b(n);
    for (int i = 0; i < n + 1; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    long answer = 0;
    for (int i = 0; i < n; i++) {
        int temp = a[i] - b[i];
        if (temp >= 0) {
            answer += b[i];
            continue;
        }

        int temp2 = a[i + 1] + temp;
        if (temp2 >= 0) {
            a[i + 1] = temp2;
            answer += b[i];
        } else {
            answer += a[i] + a[i + 1];
            a[i + 1] = 0;
        }
    }

    cout << answer << endl;
    return 0;
}