#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<vector<int>> road(2009);
set<int> start;
set<pair<int, int>> ans;
vector<bool> visited(2009, false);

void dfs(int start, int next) {
  if(visited[next]) {
    return;
  }
  visited[next] = true;

  rep(i, road[next].size()) {
    ans.insert(make_pair(start, road[next][i]));
    dfs(start, road[next][i]);
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  
  for(int i = 1; i <= n; i++) {
    start.insert(i);
    ans.insert(make_pair(i, i));
  }

  rep(i, m) {
    int a, b;
    cin >> a >> b;
    start.insert(a);
    road[a].push_back(b);
  }

  for(int s : start) {
    visited = vector<bool>(2009, false);
    dfs(s, s);
  }

  cout << ans.size() << endl;
  return 0;
}