#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
long long mod = 1000000007;

int main() {
  int n;
  cin >> n;
  vector<long long> vec(n);
  rep(i, n) {
    cin >>  vec[i];
  }

  long long answer = 0;
  long long multiple = 1;
  for(int i = 0; i < n; i++) {
    long long temp = vec[i] * multiple;
    temp %= mod;
    
    answer += temp;
    answer %= mod;

    multiple *= 2;
    multiple %= mod;
  }

  cout << answer << endl;
  return 0;
}