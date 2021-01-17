#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n = 0;
    int m = 0;
    cin >> n >> m;
    if (m == 0) {
        cout << 1 << endl;
        return 0;
    }

    vector<int> blue(m);
    for (int i = 0; i < m; i++) {
        cin >> blue[i];
    }
    blue.push_back(n + 1);

    sort(blue.begin(), blue.end());

    vector<int> whites;
    int cursor = 1;
    for (int i = 0; i < m + 1; i++) {
        int white = blue[i] - cursor;
        if (white != 0) {
            whites.push_back(white);
        }
        cursor = blue[i] + 1;
    }

    if (whites.empty()) {
        cout << 0 << endl;
        return 0;
    }
    int k = *min_element(whites.begin(), whites.end());
    
    int answer = 0;
    for (int white : whites) {
        answer += (white + k - 1) / k;
    }

    cout << answer << endl;
    return 0;
}