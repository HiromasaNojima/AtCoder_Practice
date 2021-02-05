#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(4);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "AC") {
            vec[0]++;
        } else if (s == "WA") {
            vec[1]++;
        } else if (s == "TLE") {
            vec[2]++;
        } else {
            vec[3]++;
        }
    }

    cout << "AC " << "x " << vec[0] << endl;
    cout << "WA " << "x " << vec[1] << endl;
    cout << "TLE " << "x " << vec[2] << endl;
    cout << "RE " << "x " << vec[3] << endl;
    return 0;
}