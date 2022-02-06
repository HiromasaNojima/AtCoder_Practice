#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main() {
  string s;
  cin >> s;
  string reveresed(s.rbegin(), s.rend());
  if (s == reveresed) {
    cout << "Yes" << endl;
    return 0;
  }

  int l = 0;
  int r = s.size() - 1; 
  int size = s.size(); 
  bool first = true;
  bool second = true;
  rep(i, size) {
    if(first && s[l] == 'a' && s[r] == 'a') {
      l++;
      r--;
      continue;
    }
    first = false;

    if(second && s[r] == 'a') {
      r--;
      continue;
    }
    second = false;

    if(s[l] == s[r]) {
      l++;
      r--;
    }
  }

  if (r <= l) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}