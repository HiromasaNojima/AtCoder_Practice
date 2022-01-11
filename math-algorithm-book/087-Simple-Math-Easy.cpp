#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long mod = 1000000007;


int main() {
  long long n;  
  cin >> n;
  long long a = n * (n + 1);
  a /= 2;
  a %= mod;
  cout << a * a % mod << endl;
  return 0;
}