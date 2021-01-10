#include <bits/stdc++.h> 
using namespace std;

int main() {
    string n;
    cin >> n;

    int answer = -1;
    for (int bit = 1; bit < (1 << (n.size())); bit++) {
        deque<char> deq;
        for (int i = 0; i < n.size(); i++) {
            if (bit & (1 << i)) {
                deq.push_back(n[i]);
            }
        }

        string result(deq.begin(), deq.end());
        long long num = stoll(result);
        if (num % 3 == 0) {
            int count = n.size() - deq.size();
            if (answer == -1) {
                answer = count;
            }

            if (answer > count) {
                answer = count;
            }
        }
    }

    cout << answer << endl;
    return 0;
}