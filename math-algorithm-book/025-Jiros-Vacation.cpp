#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<double> a, b;
  rep(i, n) {
    double temp;
    cin >> temp;
    a.push_back(temp);
  }

  rep(i, n) {
    double temp;
    cin >> temp;
    b.push_back(temp);
  }

  double answer = 0;
  rep(i, n) {
    answer += a[i] / 3 + b[i] * 2 / 3;
  }

  cout <<  setprecision(12) << answer << endl;
  return 0;
}
