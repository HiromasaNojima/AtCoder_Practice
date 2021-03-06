#include <bits/stdc++.h> 
using namespace std;

int maxA = 200;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    long long answer = 0;
    vector<int> distribution(maxA * 2 + 1);
    for (int i = 0; i < n; i++) {
        for (int j = -200; j <= maxA; j++) {
            int count = distribution[maxA+j];
            int rest = (vec[i] - j);
            answer += (long long)rest * rest * count;
        }
        distribution[maxA + vec[i]]++;
    }

    cout << answer << endl;
    return 0;
}