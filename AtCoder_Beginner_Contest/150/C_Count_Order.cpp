#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 1; i <= n; i++) {
        vec[i - 1] = i;
    }

    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int count = 0;
    int counta = 0;
    int countb = 0;
    do {
        count++;
        bool isa = true;
        bool isb = true;
        for (int i = 0; i < n; i++) {
            if (a[i] != vec[i]) {
                isa = false;
            }

            if (b[i] != vec[i]) {
                isb = false;
            }
        }

        if (isa) {
            counta = count;
        }

        if (isb) {
            countb = count;
        }
    } while (next_permutation(vec.begin(), vec.end()));

    cout << abs(counta - countb) << endl;
    return 0;
}