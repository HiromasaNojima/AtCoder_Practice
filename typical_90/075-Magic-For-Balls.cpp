#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  long long n;
  cin >> n;
  vector<long long> v;
  long long now = n;
  for(long long i = 2; i * i <= n; i++) {
    while(now % i == 0) {
        now /= i;
        v.push_back(i);
    }
  }
  if(now != 1) {
    v.push_back(now);
  }

  long long k = 0;
  long long pow = 1;
  while(true) {
    if(pow >= v.size()) {
      break;
    }

    pow *= 2;
    k++;
  }

  cout << k << endl;
  return 0;
}