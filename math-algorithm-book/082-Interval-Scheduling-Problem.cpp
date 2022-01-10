#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> vec(n);
  rep(i, n) {
    pair<int, int> p;
    cin >>  p.second >> p.first ;
    vec[i] = p;
  }

  sort(vec.begin(), vec.end());
  int cur = vec[0].second;
  int answer = 0;
  for(int i = 0; i < n; i++) {
    if (vec[i].second < cur) continue;

    cur = vec[i].first;
    answer++;
  }
  
  cout << answer << endl;
  return 0;
}