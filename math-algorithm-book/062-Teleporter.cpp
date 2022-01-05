#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  long long n, k;
  cin >> n >> k;
  vector<bool> visited(n + 1, false);
  vector<int> teleporter(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> teleporter[i];
  }
 
  deque<int> history;
  long long count = 0;
  int town = 1;
  while(true) {
    if (count == k) {
      cout << town << endl;
      return 0;
    }
 
    if (visited[town]) {
      while(history[0] != town) {
        history.pop_front();
        k--;
      }
 
      cout << history[k % history.size()] << endl;
      return 0;
    }
 
    visited[town] = true;
    history.push_back(town);
    town = teleporter[town];
    count++;
  }
}