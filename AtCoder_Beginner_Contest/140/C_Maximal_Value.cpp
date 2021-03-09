#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> b(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> b[i];
    }


    int answer = b[0];
    for (int i = 1; i < n; i++) {
        if (i == n - 1) {
            answer += b[i - 1];
            break;
        }
        answer += min(b[i], b[i - 1]);
    }

    cout << answer << endl;
    return 0;
}