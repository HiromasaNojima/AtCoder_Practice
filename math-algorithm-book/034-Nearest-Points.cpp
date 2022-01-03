#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  vector<pair<double, double>> p;
  cin >> n;
  rep(i, n) {
    double x, y;
    cin >> x >> y;
    p.push_back(make_pair(x, y));
  }

  double answer = 100000000.0;
  rep(i, n) {
    for (int j = i + 1; j < n; j++) {
      double xdiff = p[j].first - p[i].first;
      double ydiff = p[j].second - p[i].second;
      double powsum = xdiff * xdiff + ydiff * ydiff;
      double distance = sqrt(powsum);
      answer = min(answer, distance);
    }
  }

  cout << setprecision(28) << answer << endl;
}