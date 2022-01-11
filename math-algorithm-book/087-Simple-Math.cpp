#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long mod = 998244353;


long long func(long long num) {
  return (num * (num + 1)) / 2;
}

int main() {
  long long a, b , c;  
  cin >> a >> b >> c;

  long long ans_a = func(a);
  ans_a %= mod;

  long long ans_b = func(b);
  ans_b %= mod;

  long long ans_c = func(c);
  ans_c %= mod;

  long long answer = (ans_a * ans_b) % mod * ans_c;
  answer %= mod;

  cout << answer << endl;
  return 0;
}