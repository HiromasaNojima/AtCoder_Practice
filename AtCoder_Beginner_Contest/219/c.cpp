#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

string x;

bool sort_dictionary(string& left, string& right) {
  int l = min(left.size(), right.size());
  rep(i, l) {
    if (left[i] != right[i]) {
      auto indexleft = find(x.begin(), x.end(), left[i]);
      auto indexright = find(x.begin(), x.end(), right[i]);
      return distance(x.begin(), indexleft) < distance(x.begin(), indexright);
    }
  }

  return left.size() < right.size();
}

int main() {
  cin >> x;
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  sort(s.begin(), s.end(), sort_dictionary);
  rep(i, n) cout << s[i] << endl;
  return 0;
}