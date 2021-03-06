#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    map<int, int> m;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        m[temp]++;
        s.insert(temp);
    }

    int rest = m.size() - k;
    if (rest <= 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> vec(s.size());
    int index = 0;
    for (int key : s) {
        vec[index] = m[key];
        index++;
    }

    sort(vec.begin(), vec.end());
    int answer = 0;
    for (int i = 0; i < rest; i++) {
        answer += vec[i];
    }

    cout << answer << endl;
    return 0;
}