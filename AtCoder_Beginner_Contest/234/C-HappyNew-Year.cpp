#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long k;
  cin >> k;
  vector<int> v;
  while(k != 0) {
    long long mod = k % 2;
    k /= 2;
    if(mod == 1) {
      v.push_back(2);
    } else {
      v.push_back(0);
    }
  }

  
  reverse(v.begin(), v.end());
  rep(i, v.size()) {
    cout << v[i];
  }

  cout << endl;
  return 0;
}