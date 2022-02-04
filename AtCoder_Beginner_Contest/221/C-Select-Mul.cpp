#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
  string n;
  cin >> n;
  long long ans = -1;
  for (int bit = 0; bit < (1<<n.size()); ++bit) {
    string a = "";
    string b = "";
    for (int i = 0; i < n.size(); i++) {
      if (bit & (1 << i)) {
        a += n[i];
      } else {
        b += n[i];
      }
    }

    if(a == "" || b == "") {
      continue;
    }

    do {
      if (a[0] == '0') continue;
      do {
        if (b[0] == '0') continue;
        long long al = stoll(a);
        long long bl = stoll(b);
        ans = max((al * bl), ans);
      } while(next_permutation(b.begin(), b.end()));
    } while(next_permutation(a.begin(), a.end()));
  }

  cout << ans << endl;
  return 0;
}