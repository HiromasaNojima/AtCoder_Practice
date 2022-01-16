#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  set<string> registered;
  vector<int> ans;
  cin >> n;
  for(int i = 1; i <=n; i++) {
    string s;
    cin >> s;
    if (registered.find(s) == registered.end()) {
      ans.push_back(i);
      registered.insert(s);
    } 
  }

  for (int day : ans) {
    cout << day << endl;
  }
  return 0;
}