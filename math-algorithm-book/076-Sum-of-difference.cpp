#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  long long n;
  cin >> n;
  vector<long long> vec(n,0);
  for(long long i = 0; i < n; i++) {
    cin >> vec[i];
  }

  sort(vec.begin(), vec.end(), greater<long long>());

  long long answer = 0;
  for(long long i = 0; i < n; i++) {
    answer += (vec[i] * (n - i - 1)) - (vec[i] * i);
  }

  cout << answer << endl;
  return 0;
}