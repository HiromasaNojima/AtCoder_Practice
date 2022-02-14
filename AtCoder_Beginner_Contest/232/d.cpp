#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dx[2] = { 1, 0 };
int dy[2] = { 0, 1 };

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<char>> maze(h, vector<char>(w)); 
  vector<vector<int>> dist(h, vector<int>(w, -1)); 
  rep(i, h) {
    rep(j, w) {
      cin >> maze[i][j];
    }
  }

  queue<pair<int, int>> q;
  q.push(make_pair(0, 0));
  if(maze[0][0] == '.') {
    dist[0][0] = 1;
  } else {
    dist[0][0] = 0;
  }

  int count = 0;
  int ans = dist[0][0];
  while(!q.empty()) {
    pair<int, int> cur = q.front();
    int cur_x = cur.first;
    int cur_y = cur.second;
    q.pop();
    
    bool counted = false;
    rep(i, 2) {
      int next_x = cur_x + dx[i];
      int next_y = cur_y + dy[i];
      if (h <= next_x) continue;
      if (w <= next_y) continue;
      if (maze[next_x][next_y] == '#') continue;
      if (dist[next_x][next_y] != -1) continue;
      q.push(make_pair(next_x, next_y));
      dist[next_x][next_y] = dist[cur_x][cur_y] + 1;
      ans = max(ans, dist[next_x][next_y]);
    }
  }

  cout << ans << endl;
  return 0;
}
