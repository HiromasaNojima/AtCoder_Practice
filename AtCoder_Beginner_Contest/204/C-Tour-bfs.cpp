#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> road(n + 9);
  set<int> start;
  for(int i = 1; i <= n; i++) {
    start.insert(i);
  }

  rep(i, m) {
    int a, b;
    cin >> a >> b;
    start.insert(a);
    road[a].push_back(b);
  }

  set<pair<int, int>> ans;
  for(int s : start) {
    queue<int> pos;
    vector<vector<bool>> visit(n + 9, vector<bool>(2009, false));

    pos.push(s);
    ans.insert(make_pair(s, s));
    visit[s][s] = true;
    while(!pos.empty()) {
      int cur = pos.front();
      pos.pop();
      rep(i, road[cur].size()) {
        int next = road[cur][i];
        if(!visit[cur][next]) {
          ans.insert(make_pair(s, next));
          visit[cur][next] = true;
          if(start.find(next) != start.end()) {
            pos.push(next);
          }
        }
      }
    }
  }

  cout << ans.size() << endl;
  return 0;
}