#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, k = 0;
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    int position = k - 1;
    int diff = k - 1;
    long long min = vec[position] - vec[position - diff];
    for (int i = 0; position + i < n; i++) {
        long long temp = vec[position + i] - vec[position - diff + i];
        if (min > temp) {
            min = temp;
        }
    }

    cout << min << endl;
    return 0;
}