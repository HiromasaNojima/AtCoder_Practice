#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long GCD(long long a, long long b) {
  if (a == 0) {
    return b;
  } else if (b == 0) {
    return a;
  }

  if (a < b) {
    b %= a;
  } else {
    a %= b;
  }
  return GCD(a, b);
}

long long LCM(long long a, long long b) {
  return a / GCD(a, b) * b;
}

int main() {
  int n;
  cin >> n;
  vector<long long> nums;
  rep(i, n) {
    long long a;
    cin >> a;
    nums.push_back(a);
  }

  long long ans = LCM(nums[0], nums[1]);
  for (int i = 2; i < n; i++) {
    ans = LCM(ans, nums[i]);
  }

  cout << ans << endl;
}