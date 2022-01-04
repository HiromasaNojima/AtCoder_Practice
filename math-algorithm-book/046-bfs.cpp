#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
  int r, c, sx, sy, gx, gy;
  cin >> r >> c >> sx >> sy >> gx >> gy;
  vector<vector<char>> maze(r, vector<char>(c));
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> maze[i][j];
    }
  }

  vector<vector<int>> dist(r, vector<int>(c, -1));

  sx--;
  sy--;
  dist[sx][sy] = 0;

  queue<pair<int, int>> que;
  que.push(make_pair(sx, sy));
  while (!que.empty()) {
    pair<int, int> now = que.front();
    int now_x = now.first;
    int now_y = now.second;
    que.pop();

    for(int i = 0; i < 4; i++) {
      int next_x = now_x + dx[i];
      int next_y = now_y + dy[i];

      if (next_x >= 0 && next_y >= 0 && dist[next_x][next_y] == -1 && next_x < r && next_y < c && maze[next_x][next_y] == '.') {
        int step = dist[now_x][now_y];
        step++;
        dist[next_x][next_y] = step;
        que.push(make_pair(next_x, next_y));
      }
    }
  }
  
  gx--;
  gy--;
  cout << dist[gx][gy] << endl;
  return 0;
}
