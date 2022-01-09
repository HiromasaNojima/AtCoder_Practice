#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  set<vector<int>> s;
  rep(i, n) {
    int l;
    cin >> l;
    vector<int> vec(l);
    rep(j, l) {
      int a;
      cin >> a;
      vec.push_back(a);
    }

    s.insert(vec);
  }

  cout << s.size() << endl;
}