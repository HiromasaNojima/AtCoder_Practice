#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int n, m, a[100009], b[100009];
vector<int> g[100009];

int main() {
  cin >> n >> m;
  for(int i = 1; i <= m; i++) {
    cin >> a[i] >> b[i];
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }

  vector<int> person(n + 1, -1);
  person[1] = 0;
  queue<int> q;
  q.push(1);

  while(!q.empty()) {
    int cur = q.front();
    q.pop();

    for (int i = 0; i < (int) g[cur].size(); i++) {
      int next = g[cur][i];
      if (person[next] == -1) {
        person[next] = person[cur] + 1; 
        q.push(next);
      }
    }
  }

  for(int i = 1; i <= n; i++) {
    if (person[i] == -1) {
      cout << 120 << endl;
    } else {
      cout << min(person[i], 120) << endl;
    }
  }
  return 0;
}