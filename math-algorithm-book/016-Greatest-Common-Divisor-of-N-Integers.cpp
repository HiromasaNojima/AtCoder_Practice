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

int main() {
  int n;
  cin >> n;
  vector<long long> nums;
  rep(i, n) {
    long long a;
    cin >> a;
    nums.push_back(a);
  }

  for (int i = 0; i < n - 1; i++) {
    nums[i + 1] = GCD(nums[i], nums[i+1]);
  }

  cout << nums[n - 1];
  return 0;
}