#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  set<int> s;
  for(int i = 1; i <= 2 * n + 1; i++) {
    s.insert(i);
  }
  while(true) {
    cout << *s.begin() << endl << flush;
    s.erase(s.begin());
    int aoki;
    cin >> aoki;
    if(aoki == 0) break;
    s.erase(aoki);
  }

  return 0;
}