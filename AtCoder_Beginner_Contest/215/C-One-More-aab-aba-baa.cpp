#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s;
  int n;
  cin >> s >> n;
  vector<string> v;
  sort(s.begin(), s.end());

  do {
    v.push_back(s);
  } while(next_permutation(s.begin(), s.end()));

  sort(v.begin(), v.end());
  n--;
  cout << v[n] << endl;
  return 0;
}