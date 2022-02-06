#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  list<int> li;
  li.push_back(0);
  auto itr = li.end();
  rep(i, n) {
    if(s[i] == 'L') itr--;
    li.insert(itr, i + 1);
  }

  rep(i, n + 1) {
    int out = li.front();
    li.pop_front();
    cout << out << " ";
    if(i == n) {
      cout << endl;
    }
  }
  return 0;
}