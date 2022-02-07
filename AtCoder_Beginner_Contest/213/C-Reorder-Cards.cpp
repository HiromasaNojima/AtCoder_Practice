#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int h, w, n;
  cin >> h >> w >> n;
  vector<pair<int, int>> q(n);

  vector<int> retu;
  vector<int> gyo;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    retu.push_back(a);
    gyo.push_back(b);
    q[i] = make_pair(a, b);
  }

  sort(retu.begin(), retu.end());
  sort(gyo.begin(), gyo.end());
  retu.erase(unique(retu.begin(), retu.end()), retu.end());
  gyo.erase(unique(gyo.begin(), gyo.end()), gyo.end());

  rep(i, n) {
    int first = q[i].first;
    int second = q[i].second;

    int first_dis = distance(retu.begin(), lower_bound(retu.begin(), retu.end(), first));
    int second_dis = distance(gyo.begin(), lower_bound(gyo.begin(), gyo.end(), second));
    first_dis++;
    second_dis++;
    cout << first_dis << " " << second_dis << endl;
  }
  
  return 0;
}